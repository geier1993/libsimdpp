/*  Copyright (C) 2013  Povilas Kanapickas <povilas@radix.lt>

    Distributed under the Boost Software License, Version 1.0.
        (See accompanying file LICENSE_1_0.txt or copy at
            http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef LIBSIMDPP_SIMDPP_DETAIL_ALIGN_V128_H
#define LIBSIMDPP_SIMDPP_DETAIL_ALIGN_V128_H

#ifndef LIBSIMDPP_SIMD_H
    #error "This file must be included through simd.h"
#endif

#include <simdpp/types.h>
#include <simdpp/core/align.h>

namespace simdpp {
#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace SIMDPP_ARCH_NAMESPACE {
#endif
namespace detail {

template<unsigned shift, unsigned N>
uint8<N> align_v128(uint8<N> a, uint8<N> b) { return align16<shift>(a, b); }
template<unsigned shift, unsigned N>
uint16<N> align_v128(uint16<N> a, uint16<N> b) { return align8<shift>(a, b); }
template<unsigned shift, unsigned N>
uint32<N> align_v128(uint32<N> a, uint32<N> b) { return align4<shift>(a, b); }
template<unsigned shift, unsigned N>
uint64<N> align_v128(uint64<N> a, uint64<N> b) { return align2<shift>(a, b); }

template<unsigned shift, unsigned N>
int8<N> align_v128(int8<N> a, int8<N> b) { return align16<shift>(a, b); }
template<unsigned shift, unsigned N>
int16<N> align_v128(int16<N> a, int16<N> b) { return align8<shift>(a, b); }
template<unsigned shift, unsigned N>
int32<N> align_v128(int32<N> a, int32<N> b) { return align4<shift>(a, b); }
template<unsigned shift, unsigned N>
int64<N> align_v128(int64<N> a, int64<N> b) { return align2<shift>(a, b); }

template<unsigned shift, unsigned N>
float32<N> align_v128(float32<N> a, float32<N> b) { return align4<shift>(a, b); }
template<unsigned shift, unsigned N>
float64<N> align_v128(float64<N> a, float64<N> b) { return align2<shift>(a, b); }

} // namespace detail
#ifndef DOXYGEN_SHOULD_SKIP_THIS
} // namespace SIMDPP_ARCH_NAMESPACE
#endif
} // namespace simdpp

#endif
