#include <iostream>
#include <cstdint>

// const: read only input
// constexpr: const + calculations can be done at compile time
constexpr std::uint64_t faculty(const std::uint8_t n)
{
    auto result = std::uint64_t{1};

    for (std::uint8_t i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    const auto result1 = faculty(5); // computed at run time
    constexpr auto var = faculty(5); // computed at compile time
    // var = 10; // Error: var is read-only

    return 0;
}