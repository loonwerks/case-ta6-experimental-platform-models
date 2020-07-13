#include <all.h>

B None_964667_nonEmpty_(STACK_FRAME None_964667 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "nonEmpty", 0);
  return F;
}

void None_964667_get_(STACK_FRAME art_DataContent result, None_964667 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "get", 0);

  sfUpdateLoc(110);
  {
    DeclNewString(t_0);
    String t_1 = (String) &t_0;
    String_string_(SF t_1, string("Invalid 'None' operation 'get'."));
    sfAbort(t_1->value);
    abort();
  }
}