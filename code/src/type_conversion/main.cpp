////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 4: Type conversion.
/// \author     Georgii Zhulikov
/// \version    0.1.0
/// \date       25.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Create a program that performs the following steps:
/// 1. Reads three integer numbers from input.
/// 2. Multiplies each number by 2.
/// 3. Concatenates the (string representations of the numeric) results into a
///     single large number (string representation).
/// 4. Multiplies the result by 2.
/// 5. Outputs the resulting number.
/// 
/// Use stringstream for type converstion between numbers and strings.
/// (Additional) Use a debugger to check that at each step the strings and
/// numbers hold the correct values.
///
////////////////////////////////////////////////////////////////////////////////
// 1 2 3
// 2 4 6
// 246
// 492
#include <iostream>
#include <string>
#include <sstream>

int main() {

    std::stringstream num_buffer;

    int x;
    std::string s;
    while (std::cin >> x) {
        num_buffer << x * 2;
    }
    num_buffer >> x;
    std::cout << x * 2;
    return 0;
}