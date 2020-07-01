/*
 * Copyright 2019, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

#include <autoconf.h>
#include <camkes.h>
#include <vmlinux.h>
#include <sel4vm/guest_vm.h>

#include <sel4vmmplatsupport/drivers/cross_vm_connection.h>
#include <sel4vmmplatsupport/drivers/pci_helper.h>
#include <pci/helper.h>

#ifdef CONFIG_PLAT_QEMU_ARM_VIRT
#define CONNECTION_BASE_ADDRESS 0xDF000000
#else
#define CONNECTION_BASE_ADDRESS 0x3F000000
#endif

#define NUM_CONNECTIONS 6
static struct camkes_crossvm_connection connections[NUM_CONNECTIONS];

extern dataport_caps_handle_t sb_AutomationRequest_AutomationRequest_in_queue_1_handle;
void sb_AutomationRequest_1_notification_emit_underlying(void);
extern dataport_caps_handle_t sb_OperatingRegion_OperatingRegion_in_queue_1_handle;
void sb_OperatingRegion_1_notification_emit_underlying(void);
extern dataport_caps_handle_t sb_LineSearchTask_LineSearchTask_in_queue_1_handle;
void sb_LineSearchTask_1_notification_emit_underlying(void);
extern dataport_caps_handle_t sb_attestation_request_am_request_queue_1_handle;
seL4_Word sb_am_request_notification_notification_badge(void);
extern dataport_caps_handle_t sb_am_response_attestation_response_queue_1_handle;
void sb_am_response_1_notification_emit_underlying(void);
extern dataport_caps_handle_t sb_pacer_period_queue_handle;

static int consume_callback(vm_t *vm, void *cookie) {
    consume_connection_event(vm, (seL4_Word) cookie, true);
    return 0;
}

void init_cross_vm_connections(vm_t *vm, void *cookie) {
    connections[0] = (struct camkes_crossvm_connection) {
      .handle = &sb_AutomationRequest_AutomationRequest_in_queue_1_handle,
      .emit_fn = sb_AutomationRequest_1_notification_emit_underlying,
      .consume_badge = -1
    };

    connections[1] = (struct camkes_crossvm_connection) {
      .handle = &sb_OperatingRegion_OperatingRegion_in_queue_1_handle,
      .emit_fn = sb_OperatingRegion_1_notification_emit_underlying,
      .consume_badge = -1
    };

    connections[2] = (struct camkes_crossvm_connection) {
      .handle = &sb_LineSearchTask_LineSearchTask_in_queue_1_handle,
      .emit_fn = sb_LineSearchTask_1_notification_emit_underlying,
      .consume_badge = -1
    };

    connections[3] = (struct camkes_crossvm_connection) {
      .handle = &sb_attestation_request_am_request_queue_1_handle,
      .emit_fn = NULL,
      .consume_badge = sb_am_request_notification_notification_badge()
    };

    connections[4] = (struct camkes_crossvm_connection) {
      .handle = &sb_am_response_attestation_response_queue_1_handle,
      .emit_fn = sb_am_response_1_notification_emit_underlying,
      .consume_badge = -1
    };

    connections[5] = (struct camkes_crossvm_connection) {
      .handle = &sb_pacer_period_queue_handle,
      .emit_fn = NULL,
      .consume_badge = -1
    };

    for (int i = 0; i < NUM_CONNECTIONS; i++) {
        if (connections[i].consume_badge != -1) {
            int err = register_async_event_handler(connections[i].consume_badge, consume_callback, (void *)connections[i].consume_badge);
            ZF_LOGF_IF(err, "Failed to register_async_event_handler for init_cross_vm_connections.");
        }
    }

    cross_vm_connections_init(vm, CONNECTION_BASE_ADDRESS, connections, ARRAY_SIZE(connections));
}

DEFINE_MODULE(cross_vm_connections, NULL, init_cross_vm_connections)