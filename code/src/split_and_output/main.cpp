////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 5: Split and output.
/// \author     Georgii Zhulikov
/// \version    0.1.0
/// \date       25.01.2021
///             This code is for educational purposes of the course
///             "Introduction to programming" provided by the Faculty of
///             Computer Science at the Higher School of Economics.
///
/// Create a function that takes a string and a delimiter as input, splits the
/// string into parts separated by the delimiter and prints the parts into
/// output, without returning anything.
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <sstream>
#include <string>

// TODO: Implement splitAndOutput() method here.
void splitAndOutput(const std::string& str, char delimiter)
{
    int charCount = 0;
    int startPos = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == delimiter)
        {
            std::string s = str.substr(startPos, charCount);
            std::cout << s << std::endl;
            charCount = 0;
            startPos = i + 1;
        }
        else
        {
            ++charCount;
        }
    }
    std::string s = str.substr(startPos, charCount);
    std::cout << s << std::endl;

    for (char c : str)
    {
        if (c == delimiter)
        {
            std::cout << std::endl;
        }
        else
        {
            std::cout << c;
        }
    }


    std::cout << std::endl;
}
// 2574572547345m734573457233m3453451234123123m534535

// 2574572547345
// 734573457233
// 3453451234123123
// 534535

int main()
{
    using std::cin;
    using std::cout;

    // TODO: Check if the function splitAndOutput works correctly
    // Input a string with characters separated by a delimiter
    // Input the delimiter character
    // Call splitAndOutput

    std::string example("2574572547345m734573457233m3453451234123123m534535");
    splitAndOutput(example, 'm');

    cout << "\n\n";
    return 0;
}
