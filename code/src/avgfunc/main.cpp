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
#include <string>

using std::cout;
using std::cin;

//// TODO: Implement printDblArray() method here.
void printDblArray(double arr[], size_t size)
{
    cout << "{";
    for (size_t i = 0; i < size; ++i)
    {
        cout << arr[i];
        if (i < size - 1)
        {
            cout << ", ";
        }
    }
    cout << "}\n";
}




//// TODO: Implement calcAvg() method here.
// double calcAvg(double arr[], size_t size)
// {
//    return 0;
// }


double calcAvg(double arr[], size_t size)
{
    // sizeof(arr) == 24
    double mean = 0;
    double sum = 0;
    // 0 1 2 3 4... 21 22 23
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    mean = sum / size;
    return mean;
}


int main()
{   
    // TODO: Implement the main method here.
    // Create an array
    double a[] = {1, 2.32523, 5};
    // Calculate its mean value
    // Output both the array and its mean value
    // Repeat with a different array

    cout << calcAvg(a, 3) << std::endl;
    printDblArray(a, 3);

    // TODO: HW (see implementation): here we have the same pattern for both arrays.
    // Refactor the program (create a function if needed) to generalize cases.

    return 0;
}
