#include <cstdint>
#include <iostream>

// function declaration
void my_print_function(std::int32_t value);

int main()
{
    my_print_function(42); // function call

    return 0;
}

// function definiton
void my_print_function(std::int32_t value)
{
    std::cout << value <<'\n';
}
