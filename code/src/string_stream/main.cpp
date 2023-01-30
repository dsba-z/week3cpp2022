////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Using std::stringstream object to
///             perform convinient string-number conversions and concatenations.
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       22.01.2022
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// TASK DESCRIPTION
///
/// 1) Create a stringstream object and try to fill it up with object of
/// different types (string and numbers). Then, extract the string
/// representation of the concatenation of these objects.
/// Mention the efficiency of performing strings concatenations with the help
/// of stringstreams as compared with the operator+ approach.
///
/// 2) Train to use a stringstream object for performing string-to-number (and
/// v.v.) conversions using the semantics of streams.
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <sstream>
#include <string>

int main()
{

    std::string buffer;
    std::getline(std::cin, buffer);

    std::stringstream ss(buffer);
    // ss << 123 << 5215.51235 << "    asdasfsa";

    double x;
    ss >> x;
    std::cout << ss.str() << std::endl;
    std::cout << x << std::endl;

    return 0;
}
