# DSBA Introduction to Programming // Workshops 5 and 6
Spring semester 2022/23

Dealing with strings, streams and files.


## Topics for workshop 6

### 1. Reading files

Tutorial: https://www.cplusplus.com/doc/tutorial/files/

To read files you need to create a file stream. File streams are similar to standard input/output streams (`cin`, `cout`) and string streams.

```cpp
#include <iostream>
#include <fstream>
#include <string>

int main () {
    std::string line;
     // creating the file stream
    std::ifstream myFile("example.txt");
    if (myFile.is_open()) {

        // file stream is used instead of cin
        std::getline(myFile, line);
        std::cout << line << '\n';
        myFile.close();
    }
    else {
        std::cout << "Unable to open file"; 
    }

  return 0;
}
```


### 2. Converting types

There are several ways to convert between strings and other types (parse numbers like Python's `int(string)`).

#### stringstream

You can make a `stringstream` object, put the string in it and get the data as with `std::cin`.

```cpp
#include <iostream>
#include <sstream>
#include <string>

int main () {
    std::string dataLine = "3.1415";

    std::stringstream sstr(dataLine);

    double dataFloat;
    sstr >> dataFloat;

    std::cout << dataFloat * 2 << std::endl;
  return 0;
}
```

The same method works with other standard types like `int`, `size_t`, `float` etc.

Try to use the `stringstream` object only once. To reuse such an object you need to reset its flags: `sstr.clear();`



#### std::stoi

The standard C++ functions to directly convert strings to numerical are `std::stoi`, `std::stol`, `std::stod`, and other similar functions.

These functions are defined in the header `<string>`

Documentation: https://en.cppreference.com/w/cpp/string/basic_string/stol

Example:

```cpp
#include <iostream>
#include <string>
 
int main()
{
    std::string str1 = "45";
    int myint1 = std::stoi(str1);
 
    std::cout << "std::stoi(\"" << str1 << "\") is " << myint1 << '\n';
}

// Output:
// std::stoi("45") is 45
```

These functions throw exceptions when the conversion failed. There are additional details about more complex conversions in the documentation. For example, converting a portion of a string and saving the position after the number.


#### Outdated: atoi

These are C-versions of conversion functions. They are included for completeness but you should not used them. The functions are called similarly to `std::stoi`: `std::atoi`, `std::atof`, etc.

The are included in the header `<cstdlib>`

Documentation: https://en.cppreference.com/w/cpp/string/byte/atoi

Example:

```cpp
#include <cstdlib>
#include <iostream>
 
int main()
{
    const char *str1 = "42";
 
    const int num1 = std::atoi(str1);
 
    std::cout << "std::atoi(\"" << str1 << "\") is " << num1 << '\n';
}

// Output:
// std::atoi("42") is 42

```

### Container std::vector

`std::vector` is one of the standard C++ containers. It can be thought of a the C++ version of an array. Like how C-strings are just collections of characters in memory, and C++ std::string-s are "smart" objects that support various operations, have convenient methods and are easier to work with, the same applies to arrays and std::vector-s.

The are defined in the header `<vector>`.

Documentation: https://en.cppreference.com/w/cpp/container/vector

Example:
```cpp
#include <iostream>
#include <vector>
 
int main()
{
    // Create a vector containing integers
    std::vector<int> v = { 7, 5, 16, 8 };
 
    // Add two more integers to vector
    v.push_back(25);
    v.push_back(13);
 
    // Print out the vector
    std::cout << "v = { ";
    for (int n : v) {
        std::cout << n << ", ";
    }
    std::cout << "}; \n";
}
// Output:
// v = { 7, 5, 16, 8, 25, 13, };
```

Some important points considering vectors:


#### Templates

Vectors are a **template** container. It means they can store any object, but you have to specify the type of object you're using when you create the vector variable. It is similar to how you have to write the array type when you create an array.

```cpp
std::vector<int> vectorOfIntegers;
std::vector<double> vectorOfDoubles;
std::vector< std::vector<int> > vectorOfVectorsOfIntegers; // "matrix"
std::vector<std::string> vectorOfStrings;
```

#### Copying and pointers

By default, when you put a vector into a function, you create a **copy** of the vector and work with the copy inside the function.

This is different from Python, where by default you put the original list into a function and where you could modify that original list from within the function.

In C++ if you don't want to create a copy and want the function to work with the original object, you can pass the object **by reference**.

Examples:

```cpp
// passing a copy
void foo(std::vector<int> numbers)
{
    // do things
}

// passing a reference (vector can be modified!)
void foo(std::vector<int> &numbers)
{
    // do things
}

// passing a constant reference (vector cannot be modified)
void foo(const std::vector<int> &numbers)
{
    // do things
}

```
