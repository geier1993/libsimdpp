// This file is generated by tools/gen_operators.pl. CHANGES WILL BE OVERWRITTEN
/*  Copyright (C) 2013-2014  Povilas Kanapickas <povilas@radix.lt>

    Distributed under the Boost Software License, Version 1.0.
        (See accompanying file LICENSE_1_0.txt or copy at
            http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef LIBSIMDPP_SIMDPP_CORE_CMP_LT_OPERATOR_H
#define LIBSIMDPP_SIMDPP_CORE_CMP_LT_OPERATOR_H

#ifndef LIBSIMDPP_SIMD_H
    #error "This file must be included through simd.h"
#endif

#include <simdpp/types.h>
#include <simdpp/detail/insn/cmp_lt.h>
#include <simdpp/core/detail/scalar_arg_impl.h>

namespace simdpp {
#ifndef SIMDPP_DOXYGEN
namespace SIMDPP_ARCH_NAMESPACE {
#endif

/** Compares the values of two signed int8x16 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xff : 0x0
    ...
    rN = (aN < bN) ? 0xff : 0x0
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
mask_int8<N, _DETAIL_> operator<(int8<N,E1> a,
                              int8<N,E2> b);
#else
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int8<N, mask_int8<N>> operator<(int8<N,E1> a,
                                  int8<N,E2> b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}
#endif

SIMDPP_SCALAR_ARG_IMPL_VEC(operator<, mask_int8, int8)

/** Compares the values of two unsigned int8x16 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xff : 0x0
    ...
    rN = (aN < bN) ? 0xff : 0x0
    @endcode

    @par 128-bit version:
    @icost{SSE2-AVX2, 3-4}
    @icost{XOP, 1}

    @par 256-bit version:
    @icost{SSE2-AVX, 6-7}
    @icost{AVX2, 3-4}
    @icost{XOP, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
mask_int8<N, _DETAIL_> operator<(uint8<N,E1> a,
                              uint8<N,E2> b);
#else
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int8<N, mask_int8<N>> operator<(uint8<N,E1> a,
                                  uint8<N,E2> b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}
#endif

SIMDPP_SCALAR_ARG_IMPL_VEC(operator<, mask_int8, uint8)

/** Compares the values of two signed int16x8 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xffff : 0x0
    ...
    rN = (aN < bN) ? 0xffff : 0x0
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
mask_int16<N, _DETAIL_> operator<(int16<N,E1> a,
                               int16<N,E2> b);
#else
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int16<N, mask_int16<N>> operator<(int16<N,E1> a,
                                    int16<N,E2> b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}
#endif

SIMDPP_SCALAR_ARG_IMPL_VEC(operator<, mask_int16, int16)

/** Compares the values of two unsigned int16x8 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xffff : 0x0
    ...
    rN = (aN < bN) ? 0xffff : 0x0
    @endcode

    @par 128-bit version:
    @icost{SSE2-AVX2, 3-4}
    @icost{XOP, 1}

    @par 256-bit version:
    @icost{SSE2-AVX, 6-7}
    @icost{AVX2, 3-4}
    @icost{XOP, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
mask_int16<N, _DETAIL_> operator<(uint16<N,E1> a,
                               uint16<N,E2> b);
#else
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int16<N, mask_int16<N>> operator<(uint16<N,E1> a,
                                    uint16<N,E2> b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}
#endif

SIMDPP_SCALAR_ARG_IMPL_VEC(operator<, mask_int16, uint16)

/** Compares the values of two signed int32x4 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xffffffff : 0x0
    ...
    rN = (aN < bN) ? 0xffffffff : 0x0
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
mask_int32<N, _DETAIL_> operator<(int32<N,E1> a,
                               int32<N,E2> b);
#else
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int32<N, mask_int32<N>> operator<(int32<N,E1> a,
                                    int32<N,E2> b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}
#endif

SIMDPP_SCALAR_ARG_IMPL_VEC(operator<, mask_int32, int32)

/** Compares the values of two unsigned int32x4 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xffffffff : 0x0
    ...
    rN = (aN < bN) ? 0xffffffff : 0x0
    @endcode

    @par 128-bit version:
    @icost{SSE2-AVX2, 3-4}
    @icost{XOP, 1}

    @par 256-bit version:
    @icost{SSE2-AVX, 6-7}
    @icost{AVX2, 3-4}
    @icost{XOP, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int32<N, _DETAIL_> operator<(uint32<N,E1> a,
                               uint32<N,E2> b);
#else
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int32<N, mask_int32<N>> operator<(uint32<N,E1> a,
                                    uint32<N,E2> b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}
#endif

SIMDPP_SCALAR_ARG_IMPL_VEC(operator<, mask_int32, uint32)

/** Compares the values of two float32x4 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xffffffff : 0x0
    ...
    rN = (aN < bN) ? 0xffffffff : 0x0
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
mask_float32<N, _DETAIL_> operator<(float32<N,E1> a,
                                 float32<N,E2> b);
#else
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_float32<N, mask_float32<N>> operator<(float32<N,E1> a,
                                        float32<N,E2> b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}
#endif

SIMDPP_SCALAR_ARG_IMPL_VEC(operator<, mask_float32, float32)

/** Compares the values of two float64x2 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xffffffffffffffff : 0x0
    ...
    rN = (aN < bN) ? 0xffffffffffffffff : 0x0
    @endcode

    @par 128-bit version:
    @novec{NEON, ALTIVEC}

    @par 256-bit version:
    @novec{NEON, ALTIVEC}
    @icost{SSE2-SSE4.1, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
mask_float64<N, _DETAIL_> operator<(float64<N,E1> a,
                                 float64<N,E2> b);
#else
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_float64<N, mask_float64<N>> operator<(float64<N,E1> a,
                                        float64<N,E2> b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}
#endif

SIMDPP_SCALAR_ARG_IMPL_VEC(operator<, mask_float64, float64)

#ifndef SIMDPP_DOXYGEN
} // namespace SIMDPP_ARCH_NAMESPACE
#endif
} // namespace simdpp

#endif
