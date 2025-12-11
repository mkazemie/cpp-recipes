#include <iostream>
#include <cstdint>

int main()
{

    for (std::uint32_t i = 0u; i <= 5u; ++i) // pre increment operator
    {
        std::cout << "Iteration " << i << '\n';
    }

    std::uint32_t i = 1u;
    while (true)
    {
        std::cout << "This is an infinite loop using while.\n";
        ++i;

        if (i >= 5u)
        break; // to avoid infinite loop during execution
    }

    i = 1u;
    do // do while loop executes at least once
    {
        std::cout << "This is an infinite do while loop.\n";
        ++i;

        if (i >= 1u)
        break; // to avoid infinite loop during execution
    } while (true);
    

    return 0;
}