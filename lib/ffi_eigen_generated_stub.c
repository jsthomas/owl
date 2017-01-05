#include "libowl_eigen.h"
#include "ctypes_cstubs_internals.h"
value owl_stub_1_c_eigen_spmat_d_new(value x2, value x1)
{
   int x3 = Int_val(x2);
   int x6 = Int_val(x1);
   struct eigen_spmat_d* x9 = c_eigen_spmat_d_new(x3, x6);
   return CTYPES_FROM_PTR(x9);
}
value owl_stub_2_c_eigen_spmat_d_delete(value x10)
{
   struct eigen_spmat_d* x11 = CTYPES_ADDR_OF_FATPTR(x10);
   c_eigen_spmat_d_delete(x11);
   return Val_unit;
}
value owl_stub_3_c_eigen_spmat_d_rows(value x13)
{
   struct eigen_spmat_d* x14 = CTYPES_ADDR_OF_FATPTR(x13);
   int x15 = c_eigen_spmat_d_rows(x14);
   return Val_int(x15);
}
value owl_stub_4_c_eigen_spmat_d_cols(value x16)
{
   struct eigen_spmat_d* x17 = CTYPES_ADDR_OF_FATPTR(x16);
   int x18 = c_eigen_spmat_d_cols(x17);
   return Val_int(x18);
}
value owl_stub_5_c_eigen_spmat_d_get(value x21, value x20, value x19)
{
   struct eigen_spmat_d* x22 = CTYPES_ADDR_OF_FATPTR(x21);
   int x23 = Int_val(x20);
   int x26 = Int_val(x19);
   double x29 = c_eigen_spmat_d_get(x22, x23, x26);
   return caml_copy_double(x29);
}
value owl_stub_6_c_eigen_spmat_d_set(value x33, value x32, value x31,
                                     value x30)
{
   struct eigen_spmat_d* x34 = CTYPES_ADDR_OF_FATPTR(x33);
   int x35 = Int_val(x32);
   int x38 = Int_val(x31);
   double x41 = Double_val(x30);
   c_eigen_spmat_d_set(x34, x35, x38, x41);
   return Val_unit;
}
value owl_stub_7_c_eigen_spmat_d_reset(value x45)
{
   struct eigen_spmat_d* x46 = CTYPES_ADDR_OF_FATPTR(x45);
   c_eigen_spmat_d_reset(x46);
   return Val_unit;
}
value owl_stub_8_c_eigen_spmat_d_is_compressed(value x48)
{
   struct eigen_spmat_d* x49 = CTYPES_ADDR_OF_FATPTR(x48);
   int x50 = c_eigen_spmat_d_is_compressed(x49);
   return Val_int(x50);
}
value owl_stub_9_c_eigen_spmat_d_compress(value x51)
{
   struct eigen_spmat_d* x52 = CTYPES_ADDR_OF_FATPTR(x51);
   c_eigen_spmat_d_compress(x52);
   return Val_unit;
}
value owl_stub_10_c_eigen_spmat_d_uncompress(value x54)
{
   struct eigen_spmat_d* x55 = CTYPES_ADDR_OF_FATPTR(x54);
   c_eigen_spmat_d_uncompress(x55);
   return Val_unit;
}
value owl_stub_11_c_eigen_spmat_d_reshape(value x59, value x58, value x57)
{
   struct eigen_spmat_d* x60 = CTYPES_ADDR_OF_FATPTR(x59);
   int x61 = Int_val(x58);
   int x64 = Int_val(x57);
   c_eigen_spmat_d_reshape(x60, x61, x64);
   return Val_unit;
}
value owl_stub_12_c_eigen_spmat_d_clone(value x68)
{
   struct eigen_spmat_d* x69 = CTYPES_ADDR_OF_FATPTR(x68);
   struct eigen_spmat_d* x70 = c_eigen_spmat_d_clone(x69);
   return CTYPES_FROM_PTR(x70);
}
value owl_stub_13_c_eigen_spmat_d_print(value x71)
{
   struct eigen_spmat_d* x72 = CTYPES_ADDR_OF_FATPTR(x71);
   c_eigen_spmat_d_print(x72);
   return Val_unit;
}