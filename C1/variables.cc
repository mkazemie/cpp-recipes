#include <iostream>
#include <cstdint>

int main() {

    std::int8_t   i1 = 0;
    std::uint8_t  i2 = 255;

    std::int16_t  i3 = 32767;
    std::uint16_t i4 = 65535U;

    std::int32_t  i5 = 2147483647;
    std::uint32_t i6 = 4294967295U;

    std::int64_t  i7 = 9223372036854775807LL;
    std::uint64_t i8 = 18446744073709551615ULL;

    float  f1 = 3.402823e+38F;                 // float max
    double f2 = 1.7976931348623157e+308;       // double max

    bool b1 = true;
    bool b2 = false;

    char      c1 = 'A';
    wchar_t   c2 = L'B';
    char16_t  c3 = u'C';
    char32_t  c4 = U'D';

    std::cout << "Integer variables:\n";
    std::cout << "i1 (int8_t)   = " << static_cast<int>(i1) << '\n';
    std::cout << "i2 (uint8_t)  = " << static_cast<unsigned>(i2) << '\n';
    std::cout << "i3 (int16_t)  = " << i3 << '\n';
    std::cout << "i4 (uint16_t) = " << i4 << '\n';
    std::cout << "i5 (int32_t)  = " << i5 << '\n';
    std::cout << "i6 (uint32_t) = " << i6 << '\n';
    std::cout << "i7 (int64_t)  = " << i7 << '\n';
    std::cout << "i8 (uint64_t) = " << i8 << '\n';

    std::cout << "\nFloating-point variables:\n";
    std::cout << "f1 (float)  = " << f1 << '\n';
    std::cout << "f2 (double) = " << f2 << '\n';

    std::cout << "\nBoolean variables:\n";
    std::cout << "b1 = " << std::boolalpha << b1 << '\n';
    std::cout << "b2 = " << b2 << '\n';

    std::cout << "\nCharacter variables:\n";
    std::cout << "c1 (char)      = " << c1 << '\n';
    std::cout << "c2 (wchar_t)   = " << static_cast<wint_t>(c2) << '\n';
    std::cout << "c3 (char16_t)  = " << static_cast<char16_t>(c3) << '\n';
    std::cout << "c4 (char32_t)  = " << static_cast<char32_t>(c4) << '\n';

    return 0;
}
