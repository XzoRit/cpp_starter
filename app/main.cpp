#include <lib/lib.hpp>

#include <iostream>

auto main(int, char**) -> int
{
    std::cout << "Hello app\n";

    try
    {
        std::cout << "result = " << xzr::lib::add(0, 0);
        return 0;
    }
    catch (const std::exception& e)
    {
        std::cerr << "error: " << e.what() << "\n";
        return 1;
    }
    catch (...)
    {
        std::cerr << "Exception of unknown type!\n";
        return 2;
    }
}
