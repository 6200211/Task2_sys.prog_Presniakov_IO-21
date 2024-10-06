#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    double a = 5.2, b = 3.4;

    std::cout << "Addition: " << a << " + " << b << " = " << calc.Add(a, b) << std::endl;
    std::cout << "Subtraction: " << a << " - " << b << " = " << calc.Sub(a, b) << std::endl;

    return 0;
}
