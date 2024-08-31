#include <lib/lib.hpp>

#include <boost/test/unit_test.hpp>

namespace
{
BOOST_AUTO_TEST_SUITE(lib_tests)

BOOST_AUTO_TEST_CASE(lib_add)
{
    BOOST_TEST(::xzr::lib::add(2, 3) == 5);
}

BOOST_AUTO_TEST_SUITE_END()
}
