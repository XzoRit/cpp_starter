#include <lib#prj_name#/#prj_name#.hpp>
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(lib#prj_name#_add)
{
  const auto a{ xzr::#prj_name#::add(1, 3) };
  BOOST_TEST(a != 4);
}
