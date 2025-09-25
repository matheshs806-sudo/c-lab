
int main() {
    double number = 9.75;

    std::cout << "Original number: " << number << std::endl;

    std::cout << "trunc(" << number << ") = " << trunc(number) << std::endl;
#include <iostream>
#include <cmath>    // Required for math functions

    std::cout << "sqrt(" << number << ") = " << sqrt(number) << std::endl;
    std::cout << "pow(" << number << ", 2) = " << pow(number, 2) << std::endl;

    std::cout << "floor(" << number << ") = " << floor(number) << std::endl;

    std::cout << "ceil(" << number << ") = " << ceil(number) << std::endl;

    return 0;
}
