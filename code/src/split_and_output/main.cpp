////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 5: Split and output.
/// \author     Georgii Zhulikov
/// \version    0.1.0
/// \date       25.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Create a function that takes a string and a delimiter as input, splits the
/// string into parts separated by the delimiter and prints the parts into
/// output, without returning anything.
/// 
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include <sstream>


using std::cout;
using std::endl;
using std::cin;

// 43523452345m23452345m4523452345m2435234

// 43523452345
// 23452345
// 4523452345
// 2435234

// TODO: Implement splitAndOutput() method here.
void splitAndOutput(const std::string& str, char delimiter)
{

    for (char c: str)
    {
        if (c == delimiter)
        {
            cout << endl;
        }
        else 
        {
            cout << c;
        }
    }

    cout << "\n\n";
// character by character

// using str.substr()
    int startPos = 0;
    int substrLength = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == delimiter)
        {
            std::string s = str.substr(startPos, substrLength);
            cout << s << endl;
            startPos = i + 1;
            substrLength = 0;
        }
        else
        {
            ++substrLength;
        }
    }
    std::string s = str.substr(startPos, substrLength);
    cout << s << endl;

}

int main()
{
    using std::cout;
    using std::cin;
    // ','
    // TODO: Check if the function splitAndOutput works correctly
    // Input a string with characters separated by a delimiter
    // Input the delimiter character
    // Call splitAndOutput

    std::string example = "43523452345m23452345m4523452345m2435234";
    char delim = 'm';

    splitAndOutput(example, delim);

    
    cout << "\n\n";
    return 0;
}
