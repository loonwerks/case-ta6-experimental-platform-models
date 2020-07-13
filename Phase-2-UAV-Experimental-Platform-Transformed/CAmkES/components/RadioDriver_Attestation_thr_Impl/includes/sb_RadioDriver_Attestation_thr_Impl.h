#ifndef SB_RADIODRIVER_ATTESTATION_THR_IMPL_H
#define SB_RADIODRIVER_ATTESTATION_THR_IMPL_H

#include <sb_types.h>

bool sb_AutomationRequest_enqueue(const union_art_DataContent *);

bool sb_OperatingRegion_enqueue(const union_art_DataContent *);

bool sb_LineSearchTask_enqueue(const union_art_DataContent *);

bool sb_am_request_dequeue(union_art_DataContent *);

bool sb_am_response_enqueue(const union_art_DataContent *);

#endif // SB_RADIODRIVER_ATTESTATION_THR_IMPL_H
