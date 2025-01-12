#include <lib/lib.hpp>

#include <boost/ut.hpp>

using namespace ::boost::ut;

suite<"test_lib"> suite_lib = []() {
    using ::xzr::lib::add;
    "add(1, 2)"_test = []() { expect(add(1, 2) == 3_i); };
    "add(1, 3)"_test = []() { expect(add(1, 3) == 3_i); };
};
