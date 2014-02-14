// mms -- a memory-mapped storage.
//
// See https://github.com/dprokoptsev/mms/wiki/Library-usage
// for short instruction about its usage.

#pragma once

#include <utility>

#include "defs.h"

namespace mms {
namespace impl {

template<class X, class Y, class A>
void traverseFields(const std::pair<X, Y>& p, A a) {
    a(makeFieldDescriptor("first", &p.first));
    a(makeFieldDescriptor("second", &p.second));
}

}//namespace impl
}//namespace mms
