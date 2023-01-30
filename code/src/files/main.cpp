////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 8: Files.
/// \author     Georgii Zhulikov
/// \author     Sergey Shershakov
/// \version    0.1.1
/// \date       25.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// 1) Create a function called sumLines() that obtains an input stream
/// object (given by reference) istream&, reads float numbers from it line by
/// line and sums up numbers from each line. The result is output to a given
/// output stream (given by reference) ostream&.
///
/// Reuse function calcSumFromStream() developed in ex.7 to deal with individual
/// lines!
///
/// In the main program provide two different file stream (both text files) to
/// read from and output to data, correspondingly.
/// http://www.cplusplus.com/doc/tutorial/files/
/// 
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


// TODO: Provide a declaration (a prototype) of the method calcSumFromStream() here.
std::istream& calcSumFromStream(std::istream& in, double& sum)
{
    std::string buffer;
    std::getline(in, buffer);

    std::stringstream sstr(buffer);
    double number;
    sum = 0;
    while (sstr >> number)
    {
        sum += number;
    }
    return in;
}


// TODO: Provide a definition of the method sumLines() here.
void sumLines(std::istream& in, std::ostream& out)
{
    double sumOfLine = 0;
    while (calcSumFromStream(in, sumOfLine))
    {
        // double sumOfLine = calcSumFromStream(in);
        // if (!in)
        // {
            // break;
        // }
        out << sumOfLine << std::endl;

    }
}


int main()
{
    std::ifstream inFile("../data/problem8_files/inp.txt");
    sumLines(inFile, std::cout);
    return 0;
}

// TODO: Implement calcSumFromStream() method here.
