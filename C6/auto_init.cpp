#include <iostream>
#include <cstdint>

// AAA: Almost Always Auto-Initialize
// DRY: Don't Repeat Yourself

int main()
{

    constexpr float a = 3.14f;          // AAA: Auto-initialized to 0.0

    std::int32_t b = a; // implicit conversion from float to int

    // Casting Conversions
    auto c = static_cast<std::int32_t>(a); // explicit conversion from float to int - Best casting method in C++
    auto d = int(a); // C-style cast (not recommended in C++)

    // Construction Conversions
    auto e = std::int32_t(a); // functional cast (not recommended in C++)
    auto f = std::int32_t{a}; // uniform initialization (preferred in C++11 and later) - Best as does not allow narrowing conversions (error)

    return 0;
}
