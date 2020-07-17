#include <sb_CASE_AttestationGate_thr_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <CASE_AttestationGate_thr_Impl_adapter.h>
#include <string.h>
#include <camkes.h>

bool sb_OperatingRegion_out_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_OperatingRegion_out_queue_1, (union_art_DataContent*) data);
  sb_OperatingRegion_out_1_notification_emit();

  return true;
}

// send OperatingRegion_out: Out EventDataPort CMASI__OperatingRegion_i
Unit hamr_SW_OR_CASE_AttestationGate_thr_Impl_seL4Nix_OperatingRegion_out_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_CASE_AttestationGate_thr_Impl.c", "", "hamr_SW_OR_CASE_AttestationGate_thr_Impl_seL4Nix_OperatingRegion_out_Send", 0);

  sb_OperatingRegion_out_enqueue(d);
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of CASE_AttestationGate_thr_Impl\n");

  // initialise data structure for outgoing event data port OperatingRegion_out
  sb_queue_union_art_DataContent_1_init(sb_OperatingRegion_out_queue_1);

  // initialise slang-embedded components/ports
  hamr_SW_OR_CASE_AttestationGate_thr_Impl_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  hamr_SW_OR_CASE_AttestationGate_thr_Impl_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of CASE_AttestationGate_thr_Impl\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    hamr_SW_OR_CASE_AttestationGate_thr_Impl_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
