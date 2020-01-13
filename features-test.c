#include <stdint.h>

#include "libintvector.h"

int main() {
  Lib_IntVector_Intrinsics_vec128 a = Lib_IntVector_Intrinsics_vec128_zero;
  Lib_IntVector_Intrinsics_vec128 b = Lib_IntVector_Intrinsics_vec128_zero;

  Lib_IntVector_Intrinsics_vec128 r1 =
      Lib_IntVector_Intrinsics_vec128_add32(a, b);
  Lib_IntVector_Intrinsics_vec128 r2 =
      Lib_IntVector_Intrinsics_vec128_xor(a, b);
  Lib_IntVector_Intrinsics_vec128 r31 =
      Lib_IntVector_Intrinsics_vec128_rotate_left32(a, (uint32_t)32);
  Lib_IntVector_Intrinsics_vec128 r32 =
      Lib_IntVector_Intrinsics_vec128_rotate_left32(a, (uint32_t)16);
  Lib_IntVector_Intrinsics_vec128 r33 =
      Lib_IntVector_Intrinsics_vec128_rotate_left32(a, (uint32_t)8);
  Lib_IntVector_Intrinsics_vec128 r34 =
      Lib_IntVector_Intrinsics_vec128_rotate_left32(a, (uint32_t)3);
  Lib_IntVector_Intrinsics_vec128 r4 =
      Lib_IntVector_Intrinsics_vec128_load32((uint32_t)42);

  Lib_IntVector_Intrinsics_vec128 r5 = Lib_IntVector_Intrinsics_vec128_load32s(
      (uint32_t)3, (uint32_t)2, (uint32_t)1, (uint32_t)0);

  Lib_IntVector_Intrinsics_vec128 r6 =
      Lib_IntVector_Intrinsics_vec128_load_le(&a);

  Lib_IntVector_Intrinsics_vec128 r7 =
      Lib_IntVector_Intrinsics_vec128_interleave_low32(a, b);
  Lib_IntVector_Intrinsics_vec128 r8 =
      Lib_IntVector_Intrinsics_vec128_interleave_high32(a, b);
  Lib_IntVector_Intrinsics_vec128 r9 =
      Lib_IntVector_Intrinsics_vec128_interleave_low64(a, b);
  Lib_IntVector_Intrinsics_vec128 r10 =
      Lib_IntVector_Intrinsics_vec128_interleave_high64(a, b);
  Lib_IntVector_Intrinsics_vec128_store_le(&a, b);
  return 0;
}