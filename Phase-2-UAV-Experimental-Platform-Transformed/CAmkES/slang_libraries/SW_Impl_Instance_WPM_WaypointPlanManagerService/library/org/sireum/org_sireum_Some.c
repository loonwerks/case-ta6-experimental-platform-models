#include <all.h>

B Some_D29615_nonEmpty_(STACK_FRAME Some_D29615 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "nonEmpty", 0);
  return T;
}

void Some_D29615_get_(STACK_FRAME art_DataContent result, Some_D29615 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);
  Type_assign(result, Some_D29615_value_(this), sizeof(union art_DataContent));
  return;
}