#include <sb_CASE_AttestationManager_thr_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <CASE_AttestationManager_thr_Impl_adapter.h>
#include <string.h>
#include <camkes.h>

seqNum_t sb_trusted_ids_seqNum;

bool sb_trusted_ids_write(const union_art_DataContent * value) {
  return write_sp_union_art_DataContent(sb_trusted_ids, value, &sb_trusted_ids_seqNum);
}

bool sb_attestation_request_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_attestation_request_queue_1, (union_art_DataContent*) data);
  sb_attestation_request_1_notification_emit();

  return true;
}

sb_queue_union_art_DataContent_1_Recv_t sb_attestation_response_recv_queue;

/************************************************************************
 * sb_attestation_response_dequeue_poll:
 ************************************************************************/
bool sb_attestation_response_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_attestation_response_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_attestation_response_dequeue:
 ************************************************************************/
bool sb_attestation_response_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_attestation_response_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_attestation_response_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_attestation_response_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_attestation_response_recv_queue);
}

// send trusted_ids: Out DataPort CMASI__AddressArray_i
Unit hamr_SW_CASE_AttestationManager_thr_Impl_seL4Nix_trusted_ids_Send(STACK_FRAME 
  art_DataContent d) {
  sb_trusted_ids_write(d);
}

// send attestation_request: Out EventDataPort CASE_Model_Transformations__CASE_AttestationRequestMsg_Impl
Unit hamr_SW_CASE_AttestationManager_thr_Impl_seL4Nix_attestation_request_Send(STACK_FRAME 
  art_DataContent d) {
  sb_attestation_request_enqueue(d);
}

// is_empty attestation_response: In EventDataPort
B hamr_SW_CASE_AttestationManager_thr_Impl_seL4Nix_attestation_response_IsEmpty(STACK_FRAME_ONLY) {
  return sb_attestation_response_is_empty();
}

// receive attestation_response: In EventDataPort union_art_DataContent
Unit hamr_SW_CASE_AttestationManager_thr_Impl_seL4Nix_attestation_response_Receive(STACK_FRAME
  Option_8E9F45 result) {
  union_art_DataContent val;
  if(sb_attestation_response_dequeue((union_art_DataContent *) &val)) {
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


void pre_init(void) {
  printf("Entering pre-init of CASE_AttestationManager_thr_Impl\n");

  // initialise data structure for data port trusted_ids
  init_sp_union_art_DataContent(sb_trusted_ids, &sb_trusted_ids_seqNum);

  // initialise data structure for outgoing event data port attestation_request
  sb_queue_union_art_DataContent_1_init(sb_attestation_request_queue_1);

  // initialise data structure for incoming event data port attestation_response
  sb_queue_union_art_DataContent_1_Recv_init(&sb_attestation_response_recv_queue, sb_attestation_response_queue);

  // initialise slang-embedded components/ports
  hamr_SW_CASE_AttestationManager_thr_Impl_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  hamr_SW_CASE_AttestationManager_thr_Impl_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of CASE_AttestationManager_thr_Impl\n");
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
    hamr_SW_CASE_AttestationManager_thr_Impl_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
