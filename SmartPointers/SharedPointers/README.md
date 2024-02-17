# Shared Pointers Example
This repository contains a C++ program that demonstrates the use of shared pointers. Shared pointers are a part of the C++ Standard Library's memory header and are used for shared ownership of dynamically allocated objects. In this example, we will explore how shared pointers work and their use cases.

## Prerequisites
Before running the program, make sure you have the following:

* A C++ compiler (e.g., g++, Visual C++)
* CMake (for building)
## Getting Started
To run the program, follow these steps:

Clone this repository to your local machine or download the source files.

Build the project using CMake and your preferred C++ compiler.

Run the compiled executable.

## Code Explanation
The C++ program in this repository demonstrates the use of shared pointers with a simple Test class and various types of Account classes.

The code is organized as follows:

- **Test class**: A class with a simple integer data member to demonstrate shared pointers.

- **func function**: A function that takes a shared pointer as an argument and displays the use count.

- **main function**: The main part of the program that demonstrates shared pointers and various Account classes. The code is commented, and you can uncomment different sections to see the behavior of shared pointers.

## Shared Pointer Usage
The shared pointer usage is demonstrated in the code as follows:

* Creating and managing shared pointers for int and the Test class.
* Demonstrating the use count of shared pointers.
* Creating and managing shared pointers for different types of Account classes and storing them in a vector.
* Iterating through the vector of shared pointers and displaying account details.
## Build and Run
To build and run the code:

```bash
mkdir build
cd build
cmake ..
make
./shared_pointers_example
```
## Note
Feel free to experiment with different parts of the code by uncommenting and running various sections to understand how shared pointers behave in different scenarios.

Enjoy exploring shared pointers in C++!