#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  TIS_C4F575 = 0xC4F575CD, // IS[Z, B]
  TIS_948B60 = 0x948B6070, // IS[Z, String]
  TIS_82ABD8 = 0x82ABD805, // IS[Z, Z]
  TIS_08117A = 0x08117AAE, // IS[Z, art.UConnection]
  TIS_820232 = 0x82023297, // IS[Z, art.UPort]
  TMNone_2A2E1D = 0x2A2E1D40, // MNone[art.Bridge]
  TMS_E444B2 = 0xE444B286, // MS[Z, IS[Z, Z]]
  TMS_94FFA9 = 0x94FFA926, // MS[Z, MOption[art.Bridge]]
  TMS_F55A18 = 0xF55A1861, // MS[Z, Option[art.UPort]]
  TMS_852149 = 0x85214977, // MS[Z, art.Bridge]
  TMSome_D3D128 = 0xD3D1282F, // MSome[art.Bridge]
  TNone_3026C5 = 0x3026C5D4, // None[IS[Z, B]]
  TNone_5C1355 = 0x5C135592, // None[IS[Z, Z]]
  TNone_964667 = 0x9646678F, // None[art.DataContent]
  TNone_39BC5F = 0x39BC5F5F, // None[art.UPort]
  TSome_8D03B1 = 0x8D03B113, // Some[IS[Z, B]]
  TSome_D29615 = 0xD29615C0, // Some[art.DataContent]
  TSome_3E197E = 0x3E197EB8, // Some[art.UPort]
  TString = 0xB6F8E8F6, // String
  Tart_ArchitectureDescription = 0xAD6322F1, // art.ArchitectureDescription
  Tart_Bridge_Ports = 0x14139493, // art.Bridge.Ports
  Tart_DispatchPropertyProtocol_Periodic = 0x4C652984, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = 0x48F30CFF, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = 0x49C5E24D, // art.Empty
  Tart_Port_45E54D = 0x45E54D5D, // art.Port[IS[Z, B]]
  Thamr_Base_Types_Bits_Payload = 0x80921565, // hamr.Base_Types.Bits_Payload
  Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge = 0xC340D9D8, // hamr.SW.CASE_Filter_LST_thr_Impl_Bridge
  Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api = 0x954438F9, // hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.Api
  Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints = 0x514DFFB8, // hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.EntryPoints
  Thamr_SW_CASE_Filter_LST_thr_Impl_Impl = 0xCB4FEEDE, // hamr.SW.CASE_Filter_LST_thr_Impl_Impl
} TYPE;

char *TYPE_string_(void *type);

typedef struct Type *Type;
struct Type {
  TYPE type;
};

#define MaxString 256

typedef struct String *String;
struct String {
  TYPE type;
  Z size;
  C value[];
};

struct StaticString {
  TYPE type;
  Z size;
  C value[MaxString + 1];
};

#define string(v) ((String) &((struct { TYPE type; Z size; C value[sizeof(v)]; }) { TString, Z_C(sizeof (v) - 1), v }))
#define DeclNewString(x) struct StaticString x = { .type = TString }

#ifdef __cplusplus
}
#endif

#endif