#include <lib/lib.hpp>

#include <boost/ut.hpp>

namespace ut = boost::ut;

ut::suite errors = [] {
    using namespace ut;

    "throws"_test = [] { expect(throws([] { throw 0; })); };

    "doesn't throw"_test = [] { expect(nothrow([] {})); };
};
