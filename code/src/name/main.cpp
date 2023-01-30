////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Name input/output.
/// \author     Georgii Zhulikov
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       25.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Program asks a user to input their name, individually first and last part,
/// and outputs a name in two different forms: 1) straight, 2) inverse with comma
///
/// Try to input both first and last names in the same line. Why does the
/// program consider two words separated with spaces as two independend inputs?
/// How to fix it? → see the “name_with_spaces” problem.
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    string firstName;
    string lastName;

    cin >> firstName >> lastName;

    cout << firstName << " " << lastName << endl;
    cout << lastName << ", " << firstName << endl;

    return 0;
}
// First Middle
// Last