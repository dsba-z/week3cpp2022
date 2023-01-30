////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 6: Average.
/// \author     Georgii Zhulikov
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       25.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// 1) Create a function called printDblArray() that prints a given array of doubles
/// as a row of elements. Use comma (,) as a delimiter. Enclose the output seq in
/// curly brackets.
///
/// 2) Create a function called calcAvg() that gets as its input a c-style
/// array of double, calculates an average of array elements and returns it.
/// Put the function definition before main().
/// 
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::cin;

//// TODO: Implement printDblArray() method here.
void printDblArray(double arr[], size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << std::endl;
    }
    // {1, 2, 6, 1.251}
}


//// TODO: Implement calcAvg() method here.
//double calcAvg(double arr[], size_t size)
//{
//    return 0;
//}




int main()
{   
    double exampleArray[1000] = {1, 2, 6, 6541.25798791};
    printDblArray(exampleArray, 4);
    // TODO: Implement the main method here.
    // Create an array
    // Calculate its mean value
    // Output both the array and its mean value
    // Repeat with a different array

    // TODO: HW (see implementation): here we have the same pattern for both arrays.
    // Refactor the program (create a function if needed) to generalize cases.

    return 0;
}
