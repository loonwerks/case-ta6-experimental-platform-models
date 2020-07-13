#include <sb_RadioDriver_Attestation_thr_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <RadioDriver_Attestation_thr_Impl_adapter.h>
#include <string.h>
#include <camkes.h>

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

sb_queue_union_art_DataContent_1_Recv_t sb_am_request_recv_queue;

/************************************************************************
 * sb_am_request_dequeue_poll:
 ************************************************************************/
bool sb_am_request_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_am_request_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_am_request_dequeue:
 ************************************************************************/
bool sb_am_request_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_am_request_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_am_request_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_am_request_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_am_request_recv_queue);
}

bool sb_am_response_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_am_response_queue_1, (union_art_DataContent*) data);
  sb_am_response_1_notification_emit();

  return true;
}

// send AutomationRequest: Out EventDataPort CMASI__AddressAttributedMessage_i
Unit hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_AutomationRequest_Send(STACK_FRAME 
  art_DataContent d) {
  sb_AutomationRequest_enqueue(d);
}

// send OperatingRegion: Out EventDataPort CMASI__AddressAttributedMessage_i
Unit hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_OperatingRegion_Send(STACK_FRAME 
  art_DataContent d) {
  sb_OperatingRegion_enqueue(d);
}

// send LineSearchTask: Out EventDataPort CMASI__AddressAttributedMessage_i
Unit hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_LineSearchTask_Send(STACK_FRAME 
  art_DataContent d) {
  sb_LineSearchTask_enqueue(d);
}

// send am_response: Out EventDataPort CASE_Model_Transformations__CASE_AttestationResponseMsg_Impl
Unit hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_am_response_Send(STACK_FRAME 
  art_DataContent d) {
  sb_am_response_enqueue(d);
}

// FIXME: dummy implementation for unconnected outgoing port
Unit hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_send_data_Send(STACK_FRAME 
  art_DataContent d) {
  // FIXME: dummy implementation
}

// is_empty am_request: In EventDataPort
B hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_am_request_IsEmpty(STACK_FRAME_ONLY) {
  return sb_am_request_is_empty();
}

// receive am_request: In EventDataPort union_art_DataContent
Unit hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_am_request_Receive(STACK_FRAME
  Option_8E9F45 result) {
  union_art_DataContent val;
  if(sb_am_request_dequeue((union_art_DataContent *) &val)) {
    // wrap payload in Some and place in result
    DeclNewSome_D29615(some);
    Some_D29615_apply(STACK_FRAME &some, (art_DataContent) &val);
    Type_assign(result, &some, sizeof(union Option_8E9F45));
  } else {
    // put None in result
    DeclNewNone_964667(none);
    Type_assign(result, &none, sizeof(union Option_8E9F45));
  }
}


// FIXME: dummy implementation for unconnected incoming port
B hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_recv_data_IsEmpty(STACK_FRAME_ONLY) {
  return T;
}

// FIXME: dummy implementation for unconnected incoming port
Unit hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_recv_data_Receive(STACK_FRAME
  Option_8E9F45 result) {
  // FIXME: dummy implementation

  // put None in result
  DeclNewNone_964667(none);
  Type_assign(result, &none, sizeof(union Option_8E9F45));
}

void pre_init(void) {
  printf("Entering pre-init of RadioDriver_Attestation_thr_Impl\n");

  // initialise data structure for outgoing event data port AutomationRequest
  sb_queue_union_art_DataContent_1_init(sb_AutomationRequest_queue_1);

  // initialise data structure for outgoing event data port OperatingRegion
  sb_queue_union_art_DataContent_1_init(sb_OperatingRegion_queue_1);

  // initialise data structure for outgoing event data port LineSearchTask
  sb_queue_union_art_DataContent_1_init(sb_LineSearchTask_queue_1);

  // initialise data structure for incoming event data port am_request
  sb_queue_union_art_DataContent_1_Recv_init(&sb_am_request_recv_queue, sb_am_request_queue);

  // initialise data structure for outgoing event data port am_response
  sb_queue_union_art_DataContent_1_init(sb_am_response_queue_1);

  // initialise slang-embedded components/ports
  hamr_SW_RadioDriver_Attestation_thr_Impl_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  hamr_SW_RadioDriver_Attestation_thr_Impl_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of RadioDriver_Attestation_thr_Impl\n");
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    hamr_SW_RadioDriver_Attestation_thr_Impl_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
