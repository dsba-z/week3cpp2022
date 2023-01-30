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
#include <string>
#include <sstream>
#include <fstream>

double calcSumFromStream(std::istream& in)
{
// floating point numbers from it
// until the end of line
    double number;
    std::string buffer;
    std::getline(in, buffer);
    
    double sum = 0;
    std::stringstream sstr(buffer);
    while (sstr >> number)
    {
        sum += number;
    }
    return sum;
}


// TODO: Provide a definition of the method sumLines() here.
double sumLines(std::istream& in, std::ostream& out)
{
    while(in.good())
    {
        double lineSum = calcSumFromStream(in);
        out << lineSum << std::endl;
    }
    
}

int main()
{
    std::ifstream inFile("../data/problem8_files/inp.txt");
    sumLines(inFile, std::cout);
    return 0;
}


// TODO: Implement calcSumFromStream() method here.
