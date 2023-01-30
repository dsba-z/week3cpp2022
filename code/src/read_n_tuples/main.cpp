////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Read N Tuples
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       22.01.2022
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// TASK DESCRIPTION
///
/// A program reads n pairs (x, y) of real numbers, and calculates the average
/// of the sum of all x^y.
/// Input:
///     first line contains an integer >= 0;
///     next n lines contain pairs (x, y) separated by spaces.
/// Output:
///     the average above, or “NaN” if n == 0.
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>            // HINT: library for some math functions

// HINT: use the using statement in make it shorter referring to std::cout
// and std::cin.

using std::cin;
using std::cout;

int main()
{
    int numberOfPairs;
    cin >> numberOfPairs;

    double total = 0;

    for (int i = 0; i < numberOfPairs; ++i)
    {
        double x;
        double y;
        
        cin >> x >> y;

        total += std::pow(x, y);
    }
    cout << total / numberOfPairs;

    // TODO:
    return 0;
}
