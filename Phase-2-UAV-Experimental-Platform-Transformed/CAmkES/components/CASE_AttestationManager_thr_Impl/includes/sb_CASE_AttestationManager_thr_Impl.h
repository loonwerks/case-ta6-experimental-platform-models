// This file will be regenerated, do not edit

#ifndef SB_CASE_ATTESTATIONMANAGER_THR_IMPL_H
#define SB_CASE_ATTESTATIONMANAGER_THR_IMPL_H

#include <sb_types.h>

bool sb_trusted_ids_write(const union_art_DataContent * value);

bool sb_attestation_request_enqueue(const union_art_DataContent *);

bool sb_attestation_response_dequeue(union_art_DataContent *);

#endif // SB_CASE_ATTESTATIONMANAGER_THR_IMPL_H
