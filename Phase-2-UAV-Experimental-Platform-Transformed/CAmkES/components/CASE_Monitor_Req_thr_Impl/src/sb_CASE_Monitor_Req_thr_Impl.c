#include <sb_CASE_Monitor_Req_thr_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <CASE_Monitor_Req_thr_Impl_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_observed_recv_queue;

/************************************************************************
 * sb_observed_dequeue_poll:
 ************************************************************************/
bool sb_observed_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_observed_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_observed_dequeue:
 ************************************************************************/
bool sb_observed_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_observed_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_observed_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_observed_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_observed_recv_queue);
}

sb_queue_union_art_DataContent_1_Recv_t sb_reference_1_recv_queue;

/************************************************************************
 * sb_reference_1_dequeue_poll:
 ************************************************************************/
bool sb_reference_1_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_reference_1_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_reference_1_dequeue:
 ************************************************************************/
bool sb_reference_1_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_reference_1_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_reference_1_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_reference_1_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_reference_1_recv_queue);
}

// FIXME: dummy implementation for unconnected outgoing port
Unit hamr_SW_CASE_Monitor_Req_thr_Impl_seL4Nix_alert_Send(STACK_FRAME 
  art_DataContent d) {
  // FIXME: dummy implementation
}

// is_empty observed: In EventDataPort
B hamr_SW_CASE_Monitor_Req_thr_Impl_seL4Nix_observed_IsEmpty(STACK_FRAME_ONLY) {
  return sb_observed_is_empty();
}

// receive observed: In EventDataPort union_art_DataContent
Unit hamr_SW_CASE_Monitor_Req_thr_Impl_seL4Nix_observed_Receive(STACK_FRAME
  Option_8E9F45 result) {
  union_art_DataContent val;
  if(sb_observed_dequeue((union_art_DataContent *) &val)) {
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


// is_empty reference_1: In EventDataPort
B hamr_SW_CASE_Monitor_Req_thr_Impl_seL4Nix_reference_1_IsEmpty(STACK_FRAME_ONLY) {
  return sb_reference_1_is_empty();
}

// receive reference_1: In EventDataPort union_art_DataContent
Unit hamr_SW_CASE_Monitor_Req_thr_Impl_seL4Nix_reference_1_Receive(STACK_FRAME
  Option_8E9F45 result) {
  union_art_DataContent val;
  if(sb_reference_1_dequeue((union_art_DataContent *) &val)) {
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
  printf("Entering pre-init of CASE_Monitor_Req_thr_Impl\n");

  // initialise data structure for incoming event data port observed
  sb_queue_union_art_DataContent_1_Recv_init(&sb_observed_recv_queue, sb_observed_queue);

  // initialise data structure for incoming event data port reference_1
  sb_queue_union_art_DataContent_1_Recv_init(&sb_reference_1_recv_queue, sb_reference_1_queue);

  // initialise slang-embedded components/ports
  hamr_SW_CASE_Monitor_Req_thr_Impl_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  hamr_SW_CASE_Monitor_Req_thr_Impl_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of CASE_Monitor_Req_thr_Impl\n");
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
    hamr_SW_CASE_Monitor_Req_thr_Impl_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
