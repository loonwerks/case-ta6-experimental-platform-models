#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TIS_C4F575: return sizeof(struct IS_C4F575); // IS[Z, B]
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TIS_82ABD8: return sizeof(struct IS_82ABD8); // IS[Z, Z]
    case TIS_08117A: return sizeof(struct IS_08117A); // IS[Z, art.UConnection]
    case TIS_820232: return sizeof(struct IS_820232); // IS[Z, art.UPort]
    case TMNone_2A2E1D: return sizeof(struct MNone_2A2E1D); // MNone[art.Bridge]
    case TMS_E444B2: return sizeof(struct MS_E444B2); // MS[Z, IS[Z, Z]]
    case TMS_94FFA9: return sizeof(struct MS_94FFA9); // MS[Z, MOption[art.Bridge]]
    case TMS_F55A18: return sizeof(struct MS_F55A18); // MS[Z, Option[art.UPort]]
    case TMS_852149: return sizeof(struct MS_852149); // MS[Z, art.Bridge]
    case TMSome_D3D128: return sizeof(struct MSome_D3D128); // MSome[art.Bridge]
    case TNone_3026C5: return sizeof(struct None_3026C5); // None[IS[Z, B]]
    case TNone_5C1355: return sizeof(struct None_5C1355); // None[IS[Z, Z]]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
    case TNone_39BC5F: return sizeof(struct None_39BC5F); // None[art.UPort]
    case TSome_8D03B1: return sizeof(struct Some_8D03B1); // Some[IS[Z, B]]
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_3E197E: return sizeof(struct Some_3E197E); // Some[art.UPort]
    case TString: return sizeof(struct String); // String
    case Tart_ArchitectureDescription: return sizeof(struct art_ArchitectureDescription); // art.ArchitectureDescription
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_DispatchPropertyProtocol_Periodic: return sizeof(struct art_DispatchPropertyProtocol_Periodic); // art.DispatchPropertyProtocol.Periodic
    case Tart_DispatchPropertyProtocol_Sporadic: return sizeof(struct art_DispatchPropertyProtocol_Sporadic); // art.DispatchPropertyProtocol.Sporadic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_Port_45E54D: return sizeof(struct art_Port_45E54D); // art.Port[IS[Z, B]]
    case Tart_Port_9CBF18: return sizeof(struct art_Port_9CBF18); // art.Port[art.Empty]
    case Thamr_Base_Types_Bits_Payload: return sizeof(struct hamr_Base_Types_Bits_Payload); // hamr.Base_Types.Bits_Payload
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge: return sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge); // hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_Api: return sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_Api); // hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge.Api
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints: return sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints); // hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge.EntryPoints
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Impl: return sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl); // hamr.SW.CASE_Monitor_Geo_thr_Impl_Impl
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_assign(void *dest, void *src, size_t destSize) {
  Type srcType = (Type) src;
  if (srcType->type == TString) {
    String_assign((String) dest, (String) src);
    return;
  }
  size_t srcSize = sizeOf(srcType);
  memcpy(dest, src, srcSize);
  memset(((char *) dest) + srcSize, 0, destSize - srcSize);
}

char *TYPE_string_(void *type) {
  static char *strings[] = {
    "IS[Z, B]",
    "IS[Z, String]",
    "IS[Z, Z]",
    "IS[Z, art.UConnection]",
    "IS[Z, art.UPort]",
    "MNone[art.Bridge]",
    "MS[Z, IS[Z, Z]]",
    "MS[Z, MOption[art.Bridge]]",
    "MS[Z, Option[art.UPort]]",
    "MS[Z, art.Bridge]",
    "MSome[art.Bridge]",
    "None[IS[Z, B]]",
    "None[IS[Z, Z]]",
    "None[art.DataContent]",
    "None[art.UPort]",
    "Some[IS[Z, B]]",
    "Some[art.DataContent]",
    "Some[art.UPort]",
    "String",
    "art.ArchitectureDescription",
    "art.Bridge.Ports",
    "art.DispatchPropertyProtocol.Periodic",
    "art.DispatchPropertyProtocol.Sporadic",
    "art.Empty",
    "art.Port[IS[Z, B]]",
    "art.Port[art.Empty]",
    "hamr.Base_Types.Bits_Payload",
    "hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge",
    "hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge.Api",
    "hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge.EntryPoints",
    "hamr.SW.CASE_Monitor_Geo_thr_Impl_Impl"
  };
  return strings[((Type) type)->type];
}