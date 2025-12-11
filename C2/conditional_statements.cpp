#include <iostream>
#include <cstdint>

int main() {
    
    bool b1 = true;
    bool b2 = false;

    bool c1 = (b1 || b2);  // Logical OR
    bool c2 = (b1 && b2);  // Logical AND
    bool c3 = !b1;         // Logical NOT

    if (b1 == true)
    {
        std::cout << "b1 is positive.\n";
    }
    else if (b1 == true)
    {
        std::cout << "b1 is negative.\n";
    }
    else
    {
        std::cout << "The number is zero.\n";
    }

    std::int32_t result;
    if (b1 == true)
    {
        result = 100;
    }
    else
    {
        result = -100;
    }

    // Other method to do the same
    result = b1 == true ? 100 : -100; // ternary operator


    return 0;
}