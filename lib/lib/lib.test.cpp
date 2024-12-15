#include <lib/lib.hpp>

#include <boost/ut.hpp>

int main(int, const char**)
{
    using namespace boost::ut;

    expect(::xzr::lib::add(1, 2) == 3_i);
}
