// This file will be regenerated, do not edit

#include <sb_RadioDriver_Attestation_thr_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <RadioDriver_Attestation_thr_Impl_adapter.h>
#include <string.h>
#include <camkes.h>

seqNum_t sb_trusted_ids_seqNum;

bool sb_trusted_ids_write(const union_art_DataContent * value) {
  return write_sp_union_art_DataContent(sb_trusted_ids, value, &sb_trusted_ids_seqNum);
}

bool sb_AutomationRequest_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_AutomationRequest_queue_1, (union_art_DataContent*) data);
  sb_AutomationRequest_1_notification_emit();

  return true;
}

bool sb_OperatingRegion_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_OperatingRegion_queue_1, (union_art_DataContent*) data);
  sb_OperatingRegion_1_notification_emit();

  return true;
}

bool sb_LineSearchTask_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_LineSearchTask_queue_1, (union_art_DataContent*) data);
  sb_LineSearchTask_1_notification_emit();

  return true;
}

// send trusted_ids: Out DataPort CMASI__AddressArray_i
Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_trusted_ids_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Attestation_thr_Impl.c", "", "hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_trusted_ids_Send", 0);

  sb_trusted_ids_write(d);
}

// send AutomationRequest: Out EventDataPort CMASI__AddressAttributedMessage_i
Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_AutomationRequest_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Attestation_thr_Impl.c", "", "hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_AutomationRequest_Send", 0);

  sb_AutomationRequest_enqueue(d);
}

// send OperatingRegion: Out EventDataPort CMASI__AddressAttributedMessage_i
Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_OperatingRegion_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Attestation_thr_Impl.c", "", "hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_OperatingRegion_Send", 0);

  sb_OperatingRegion_enqueue(d);
}

// send LineSearchTask: Out EventDataPort CMASI__AddressAttributedMessage_i
Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_LineSearchTask_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Attestation_thr_Impl.c", "", "hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_LineSearchTask_Send", 0);

  sb_LineSearchTask_enqueue(d);
}

// FIXME: dummy implementation for unconnected outgoing port
Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_send_data_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Attestation_thr_Impl.c", "", "hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_send_data_Send", 0);
  // FIXME: dummy implementation
}

// FIXME: dummy implementation for unconnected incoming port
B hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_recv_data_IsEmpty(STACK_FRAME_ONLY) {
  return T;
}

// FIXME: dummy implementation for unconnected incoming port
Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_recv_data_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Attestation_thr_Impl.c", "", "hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_seL4Nix_recv_data_Receive", 0);

  // FIXME: dummy implementation

  // put None in result
  DeclNewNone_964667(none);
  Type_assign(result, &none, sizeof(union Option_8E9F45));
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_RadioDriver_Attestation_thr_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of RadioDriver_Attestation_thr_Impl\n");

  // initialise data structure for data port trusted_ids
  init_sp_union_art_DataContent(sb_trusted_ids, &sb_trusted_ids_seqNum);

  // initialise data structure for outgoing event data port AutomationRequest
  sb_queue_union_art_DataContent_1_init(sb_AutomationRequest_queue_1);

  // initialise data structure for outgoing event data port OperatingRegion
  sb_queue_union_art_DataContent_1_init(sb_OperatingRegion_queue_1);

  // initialise data structure for outgoing event data port LineSearchTask
  sb_queue_union_art_DataContent_1_init(sb_LineSearchTask_queue_1);

  // initialise slang-embedded components/ports
  hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of RadioDriver_Attestation_thr_Impl\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_RadioDriver_Attestation_thr_Impl.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
