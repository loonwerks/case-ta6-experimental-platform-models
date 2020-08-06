package hamr.SW_AUGUST

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// This file will not be overwritten so is safe to edit
class SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_Test extends BridgeTestSuite[CASE_Filter_AReq_thr_Impl_Bridge](Arch.SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in EventDataPort
  def put_filter_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.filter_in_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_filter_out_UXAS(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_filter_out_UXAS_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port filter_out_UXAS.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_filter_out_UXAS_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.filter_out_UXAS_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_filter_out_MON_REQ(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_filter_out_MON_REQ_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port filter_out_MON_REQ.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_filter_out_MON_REQ_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.filter_out_MON_REQ_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  def getComponent(): CASE_Filter_AReq_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[CASE_Filter_AReq_thr_Impl_Bridge.EntryPoints].component
  }
}
