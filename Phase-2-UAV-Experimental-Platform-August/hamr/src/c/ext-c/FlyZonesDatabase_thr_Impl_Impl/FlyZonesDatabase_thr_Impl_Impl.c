#include <FlyZonesDatabase_thr_Impl_Impl_api.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

/**
 * See https://github.com/loonwerks/CASE/blob/master/TA2/lmcp-message-format/zones.md
 * for details on the actual encoding
 */
U8 flyZoneDBKeepInZone[] = {0x40, 0x46, 0xA6, 0x73, 0x4F, 0x82, 0xF5, 0x12, 
                            0xC0, 0x5E, 0x40, 0xF2, 0xA1, 0x72, 0xAB, 0xEF, 
                            0x44, 0x7A, 0x00, 0x00, 
                            0x00, 0x00, 0x00, 0x01, 
                            0x40, 0x46, 0xAC, 0x34, 0x3B, 0x70, 0xEF, 0x56, 
                            0xC0, 0x5E, 0x3A, 0x65, 0x98, 0xE1, 0x0C, 0xF6, 
                            0x44, 0x7A, 0x00, 0x00, 
                            0x00, 0x00, 0x00, 0x01};
  
U8 flyZoneDBKeepOutZone[] = {0x40, 0x46, 0xAA, 0xA1, 0xAD, 0x64, 0x51, 0xB9, 
                             0xC0, 0x5E, 0x3C, 0x09, 0xA2, 0x40, 0x31, 0x48, 
                             0x44, 0x7A, 0x00, 0x00, 
                             0x00, 0x00, 0x00, 0x01, 
                             0x40, 0x46, 0xAA, 0xFA, 0x0D, 0x77, 0xB7, 0xC8, 
                             0xC0, 0x5E, 0x3B, 0xCA, 0xA7, 0x58, 0x9E, 0xFE, 
                             0x44, 0x7A, 0x00, 0x00, 
                             0x00, 0x00, 0x00, 0x01};

U8 isaacKeepInZone[] = {0x40, 0x46, 0xA6, 0x73, 0x7F, 0x91, 0x58, 0x22, 
                        0xC0, 0x5E, 0x40, 0xF1, 0x55, 0xC9, 0x5C, 0x81, 
                        0x44, 0x7A, 0x00, 0x00, 
                        0x00, 0x00, 0x00, 0x01,
                        0x40, 0x46, 0xAC, 0x33, 0x4C, 0x34, 0xCA, 0x58, 
                        0xC0, 0x5E, 0x3A, 0x66, 0xB8, 0x6D, 0xFA, 0x7D, 
                        0x44, 0x7A, 0x00, 0x00, 
                        0x00, 0x00, 0x00, 0x01};

U8 isaacKeepOutZone[] = {0x40, 0x46, 0xAA, 0xA1, 0xB1, 0xAD, 0xC6, 0xD5, 
                         0xC0, 0x5E, 0x3C, 0x09, 0xC2, 0xEB, 0xA6, 0x0C, 
                         0x44, 0x7A, 0x00, 0x00, 
                         0x00, 0x00, 0x00, 0x01,
                         0x40, 0x46, 0xAA, 0xFA, 0x00, 0x85, 0xEC, 0xB9, 
                         0xC0, 0x5E, 0x3B, 0xCA, 0xF3, 0x58, 0x81, 0xEB, 
                         0x44, 0x7A, 0x00, 0x00, 
                         0x00, 0x00, 0x00, 0x01};
                             
Z flyZoneDBNumBits = 48 * 8;

F64 U8_array_to_F64_big_endian(U8 *bytes) {
    U8 littleEndian[8];
    int i = 7;
    do {
       littleEndian[7-i] = bytes[i];
    } while (--i >= 0);
    return *((F64*)littleEndian);
}

F32 U8_array_to_F32_big_endian(U8 *bytes) {
    U8 littleEndian[4];
    int i = 3;
    do {
        littleEndian[3-i] = bytes[i];
    } while (--i >= 0);
    return *((F32*)littleEndian);
}

Unit location3D_U8_array_string_(STACK_FRAME String s, U8 *bytes) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Impl_api.c", "", "location3D_U8_array_string_", 0);
    F64 latitude = U8_array_to_F64_big_endian(bytes);
    F64 longitude = U8_array_to_F64_big_endian(bytes+8);
    F32 altitude = U8_array_to_F32_big_endian(bytes+16);
    U8 altitudeType = *(bytes + 20);
    String__append(SF s, string("("));
    F64_string_(SF s, latitude);
    String__append(SF s,string(", "));
    F64_string_(SF s, longitude);
    String__append(SF s, string(", "));
    F32_string_(SF s, altitude);
    String__append(SF s, string(", "));
    U8_string_(SF s, altitudeType);
    String__append(SF s, string(")"));
}

Unit polygon_U8_array_string_(STACK_FRAME String s, U8 *bytes) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Impl_api.c", "", "polygon_U8_array_string_", 0);
  
    String__append(SF s, string("("));
    location3D_U8_array_string_(SF s, bytes);
    String__append(SF s, string(", "));
    location3D_U8_array_string_(SF s, bytes + 24);
}

Unit hamr_SW_AUGUST_FlyZonesDatabase_thr_Impl_Impl_initialise_(
  STACK_FRAME
  hamr_SW_AUGUST_FlyZonesDatabase_thr_Impl_Impl this) {
 DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Impl_api.c", "", "hamr_SW_AUGUST_FlyZonesDatabase_thr_Impl_Impl_initialise_", 0);

 // example api usage
  DeclNewString(_msg);
  String msg = (String)&_msg;
  String__append(SF msg, string("\n\t keep_in_zone -> "));
  polygon_U8_array_string_(SF msg, isaacKeepInZone);
  String__append(SF msg, string("\n\tkeep_out_zone -> "));
  polygon_U8_array_string_(SF msg, isaacKeepOutZone);
  api_logInfo__hamr_SW_AUGUST_FlyZonesDatabase_thr_Impl_Impl(SF this, msg);
  api_send_keep_in_zones__hamr_SW_AUGUST_FlyZonesDatabase_thr_Impl_Impl(SF this, flyZoneDBNumBits, isaacKeepInZone);
  api_send_keep_out_zones__hamr_SW_AUGUST_FlyZonesDatabase_thr_Impl_Impl(SF this, flyZoneDBNumBits, isaacKeepOutZone);
}

Unit hamr_SW_AUGUST_FlyZonesDatabase_thr_Impl_Impl_finalise_(
  STACK_FRAME
  hamr_SW_AUGUST_FlyZonesDatabase_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Impl_api.c", "", "hamr_SW_AUGUST_FlyZonesDatabase_thr_Impl_Impl_finalise_", 0);

  // example finalise method
}

Unit hamr_SW_AUGUST_FlyZonesDatabase_thr_Impl_Impl_timeTriggered_(
  STACK_FRAME
  hamr_SW_AUGUST_FlyZonesDatabase_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Impl_api.c", "", "hamr_SW_AUGUST_FlyZonesDatabase_thr_Impl_Impl_timeTriggered_", 0);
}
