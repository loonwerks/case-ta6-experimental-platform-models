#include <all.h>

B hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_initialized_ = F;

union art_Bridge_EntryPoints _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_entryPoints;
Z _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortId;
union Option_882048 _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortIdOpt;
Z _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortId;
union Option_882048 _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortIdOpt;
Z _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortId;
union Option_882048 _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortIdOpt;
Z _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_observedPortId;
union Option_882048 _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_observedPortIdOpt;

void hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_init(STACK_FRAME_ONLY) {
  if (hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_initialized_) return;
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_initialized_ = T;
  DeclNewStackFrame(caller, "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.scala", "hamr.MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App", "<init>", 0);
  Type_assign(&_hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_entryPoints, hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_entryPoints_(hamr_Arch_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortId = hamr_IPCPorts_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App(SF_LAST);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortId(SF_LAST));
  Type_assign(&_hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
  _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortId = art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_keep_in_zones_(hamr_Arch_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST)));
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortId(SF_LAST));
  Type_assign(&_hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortIdOpt, (&t_1), sizeof(struct Some_488F47));
  _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortId = art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_keep_out_zones_(hamr_Arch_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST)));
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortId(SF_LAST));
  Type_assign(&_hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortIdOpt, (&t_2), sizeof(struct Some_488F47));
  _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_observedPortId = art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_observed_(hamr_Arch_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST)));
  DeclNewSome_488F47(t_3);
  Some_488F47_apply(SF &t_3, hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_observedPortId(SF_LAST));
  Type_assign(&_hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_observedPortIdOpt, (&t_3), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_entryPoints(STACK_FRAME_ONLY) {
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_entryPoints;
}

Z hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortId(STACK_FRAME_ONLY) {
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_init(CALLER_LAST);
  return _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortId;
}

Option_882048 hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortIdOpt(STACK_FRAME_ONLY) {
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortIdOpt;
}

Z hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortId(STACK_FRAME_ONLY) {
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_init(CALLER_LAST);
  return _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortId;
}

Option_882048 hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortIdOpt(STACK_FRAME_ONLY) {
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortIdOpt;
}

Z hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortId(STACK_FRAME_ONLY) {
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_init(CALLER_LAST);
  return _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortId;
}

Option_882048 hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortIdOpt(STACK_FRAME_ONLY) {
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortIdOpt;
}

Z hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_observedPortId(STACK_FRAME_ONLY) {
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_init(CALLER_LAST);
  return _hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_observedPortId;
}

Option_882048 hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_observedPortIdOpt(STACK_FRAME_ONLY) {
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_observedPortIdOpt;
}

Z hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.scala", "hamr.MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App", "main", 0);

  sfUpdateLoc(61);
  Z seed;
  Z t_0 = IS_948B60_size(SF args);
  if (Z__eq(t_0, Z_C(1))) {

    sfUpdateLoc(62);
    DeclNewOption_882048(t_1);
    Z_apply(&t_1, IS_948B60_at(args, Z_C(0)));
    Z t_2 = Option_882048_get_(SF (&t_1));
    Z n = t_2;
    Z t_3;
    if (Z__eq(n, Z_C(0))) {
      t_3 = Z_C(1);
    } else {
      t_3 = n;
    }
    seed = t_3;
  } else {
    seed = Z_C(1);
  }

  sfUpdateLoc(68);
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_initialiseArchitecture(SF seed);

  sfUpdateLoc(70);
  DeclNewTuple2_D0E3BB(t_4);
  hamr_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  sfUpdateLoc(72);
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_initialise(SF_LAST);

  sfUpdateLoc(74);
  DeclNewTuple2_D0E3BB(t_6);
  hamr_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_6, (Option_882048) hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_7 = ((Tuple2_D0E3BB) &t_6);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(76);
  String_cprint(string("MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(78);
  hamr_ArtNix_timeDispatch(SF_LAST);

  sfUpdateLoc(80);
  B terminated = F;

  sfUpdateLoc(81);
  B t_81_5 = (!terminated);
  while(t_81_5) {

    sfUpdateLoc(82);
    DeclNewOption_02FA6D(_termOpt);
    Option_02FA6D termOpt;
    DeclNewOption_02FA6D(t_8);
    hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_8, (Option_882048) hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortIdOpt(SF_LAST));
    termOpt = (Option_02FA6D) ((Option_02FA6D) &t_8);

    sfUpdateLoc(83);
    B t_9 = Option_02FA6D_isEmpty_(SF termOpt);
    if (t_9) {

      sfUpdateLoc(84);
      hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(86);
      terminated = T;
    }

    sfUpdateLoc(81);
    t_81_5 = (!terminated);
  }

  sfUpdateLoc(89);
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_exit(SF_LAST);
  return Z_C(0);
}

Unit hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.scala", "hamr.MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App", "atExit", 0);

  sfUpdateLoc(100);
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_exit(SF_LAST);
}

Unit hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.scala", "hamr.MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App", "initialiseArchitecture", 0);

  sfUpdateLoc(23);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_appPortIdOpt(SF_LAST));

  sfUpdateLoc(24);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortIdOpt(SF_LAST));

  sfUpdateLoc(25);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortIdOpt(SF_LAST));

  sfUpdateLoc(26);
  hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_observedPortIdOpt(SF_LAST));

  sfUpdateLoc(28);
  art_Art_run(SF (art_ArchitectureDescription) hamr_Arch_ad(SF_LAST));
}

Unit hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.scala", "hamr.MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App", "initialise", 0);

  sfUpdateLoc(32);
  art_Bridge_EntryPoints_initialise_(SF hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_entryPoints(SF_LAST));
}

static inline B hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_37_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_0, hamr_Base_Types_Bits_Payload *_v_37_21) {
  if (!Some_E9D1E5__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0))))) return F;
  *_v_37_21 = (hamr_Base_Types_Bits_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0)));
  return T;
}

static inline B hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_38_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_0, art_DataContent *_v_38_21) {
  if (!Some_E9D1E5__is(SF t_0)) return F;
  *_v_38_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0)));
  return T;
}

static inline B hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_39_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_0) {
  if (!None_93AA2B__is(SF t_0)) return F;
  return T;
}

static inline B hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_42_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_5, hamr_Base_Types_Bits_Payload *_v_42_21) {
  if (!Some_E9D1E5__is(SF t_5)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_5))))) return F;
  *_v_42_21 = (hamr_Base_Types_Bits_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_5)));
  return T;
}

static inline B hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_43_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_5, art_DataContent *_v_43_21) {
  if (!Some_E9D1E5__is(SF t_5)) return F;
  *_v_43_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_5)));
  return T;
}

static inline B hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_44_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_5) {
  if (!None_93AA2B__is(SF t_5)) return F;
  return T;
}

static inline B hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_47_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_10, hamr_Base_Types_Bits_Payload *_v_47_21) {
  if (!Some_E9D1E5__is(SF t_10)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_10))))) return F;
  *_v_47_21 = (hamr_Base_Types_Bits_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_10)));
  return T;
}

static inline B hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_48_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_10, art_DataContent *_v_48_21) {
  if (!Some_E9D1E5__is(SF t_10)) return F;
  *_v_48_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_10)));
  return T;
}

static inline B hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_49_12_02FA6D(STACK_FRAME_SF Option_02FA6D t_10) {
  if (!None_93AA2B__is(SF t_10)) return F;
  return T;
}

Unit hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.scala", "hamr.MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App", "compute", 0);

  sfUpdateLoc(36);
  DeclNewOption_02FA6D(t_1);
  hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_1, (Option_882048) hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortIdOpt(SF_LAST));
  Option_02FA6D t_0 = ((Option_02FA6D) &t_1);
  B match_36_14 = F;
  if (!match_36_14) {
    hamr_Base_Types_Bits_Payload v_37_21;
    match_36_14 = hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_37_12_02FA6D(SF t_0, &v_37_21);
    if (match_36_14) {

      sfUpdateLoc(37);
      hamr_ArtNix_updateData(SF hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_in_zonesPortId(SF_LAST), (art_DataContent) v_37_21);
    }
  }
  if (!match_36_14) {
    art_DataContent v_38_21;
    match_36_14 = hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_38_12_02FA6D(SF t_0, &v_38_21);
    if (match_36_14) {

      sfUpdateLoc(38);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected payload on port keep_in_zones.  Expecting something of type Base_Types.Bits_Payload but received "));
      art_DataContent_string_(SF (String) &t_4, v_38_21);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_36_14) {
    match_36_14 = hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_39_12_02FA6D(SF t_0);
    if (match_36_14) {
    }
  }
  sfAssert(match_36_14, "Error when pattern matching.");

  sfUpdateLoc(41);
  DeclNewOption_02FA6D(t_6);
  hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_6, (Option_882048) hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortIdOpt(SF_LAST));
  Option_02FA6D t_5 = ((Option_02FA6D) &t_6);
  B match_41_14 = F;
  if (!match_41_14) {
    hamr_Base_Types_Bits_Payload v_42_21;
    match_41_14 = hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_42_12_02FA6D(SF t_5, &v_42_21);
    if (match_41_14) {

      sfUpdateLoc(42);
      hamr_ArtNix_updateData(SF hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_keep_out_zonesPortId(SF_LAST), (art_DataContent) v_42_21);
    }
  }
  if (!match_41_14) {
    art_DataContent v_43_21;
    match_41_14 = hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_43_12_02FA6D(SF t_5, &v_43_21);
    if (match_41_14) {

      sfUpdateLoc(43);
      DeclNewString(t_7);
      String t_8 = (String) &t_7;
      DeclNewString(t_9);
      String_string_(SF (String) &t_9, string("Unexpected payload on port keep_out_zones.  Expecting something of type Base_Types.Bits_Payload but received "));
      art_DataContent_string_(SF (String) &t_9, v_43_21);
      String_string_(SF (String) &t_9, string(""));
      String_string_(SF t_8, ((String) &t_9));
      sfAbort(t_8->value);
      abort();
    }
  }
  if (!match_41_14) {
    match_41_14 = hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_44_12_02FA6D(SF t_5);
    if (match_41_14) {
    }
  }
  sfAssert(match_41_14, "Error when pattern matching.");

  sfUpdateLoc(46);
  DeclNewOption_02FA6D(t_11);
  hamr_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_11, (Option_882048) hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_observedPortIdOpt(SF_LAST));
  Option_02FA6D t_10 = ((Option_02FA6D) &t_11);
  B match_46_14 = F;
  if (!match_46_14) {
    hamr_Base_Types_Bits_Payload v_47_21;
    match_46_14 = hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_47_12_02FA6D(SF t_10, &v_47_21);
    if (match_46_14) {

      sfUpdateLoc(47);
      hamr_ArtNix_updateData(SF hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_observedPortId(SF_LAST), (art_DataContent) v_47_21);
    }
  }
  if (!match_46_14) {
    art_DataContent v_48_21;
    match_46_14 = hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_48_12_02FA6D(SF t_10, &v_48_21);
    if (match_46_14) {

      sfUpdateLoc(48);
      DeclNewString(t_12);
      String t_13 = (String) &t_12;
      DeclNewString(t_14);
      String_string_(SF (String) &t_14, string("Unexpected payload on port observed.  Expecting something of type Base_Types.Bits_Payload but received "));
      art_DataContent_string_(SF (String) &t_14, v_48_21);
      String_string_(SF (String) &t_14, string(""));
      String_string_(SF t_13, ((String) &t_14));
      sfAbort(t_13->value);
      abort();
    }
  }
  if (!match_46_14) {
    match_46_14 = hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_compute_extract_49_12_02FA6D(SF t_10);
    if (match_46_14) {
    }
  }
  sfAssert(match_46_14, "Error when pattern matching.");

  sfUpdateLoc(51);
  art_Bridge_EntryPoints_compute_(SF hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_entryPoints(SF_LAST));

  sfUpdateLoc(52);
  hamr_Process_sleep(SF Z_C(500));
}

Unit hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.scala", "hamr.MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App", "exit", 0);

  sfUpdateLoc(95);
  hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_finalise(SF_LAST);

  sfUpdateLoc(96);
  hamr_PlatformNix_finalise(SF_LAST);
}

Unit hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.scala", "hamr.MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App", "finalise", 0);

  sfUpdateLoc(56);
  art_Bridge_EntryPoints_finalise_(SF hamr_MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_App_entryPoints(SF_LAST));
}