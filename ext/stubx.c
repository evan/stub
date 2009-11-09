#include "stubx.h"

VALUE rb_StubC;

static VALUE stub(VALUE self) {
  return Qtrue;
}

void Init_stubx()
{
  rb_StubC = rb_define_class("Stub", rb_cObject);
  rb_define_singleton_method(rb_StubC, "stub", stub, 0);
}
