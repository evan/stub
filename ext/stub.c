#include "stub.h"

static VALUE stub(VALUE self) {
  return Qnil;
}

void Init_stub()
{
  rb_cC = rb_define_class("Stub", rb_cObject);
  rb_define_singleton_method(rb_cC, "stub", stub, 0);
}
