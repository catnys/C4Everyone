# Operator Overloading as Non-member Functions

This GitHub repository provides a solution to the problem of operator overloading for the Money class. In this problem, we are required to overload the `+` operator as a non-member friend function to add two Money objects together and return a Money object representing their sum. The overloaded operator function should not modify the objects in any way.

## Problem Description

The provided Money class needs an implementation of the `+` operator to allow the addition of two Money objects. The operator should return a Money object representing the sum of the two operands. This operator function should be implemented as a non-member friend function.

### Steps to Solve

To solve this problem, follow these steps:

1. **Declaration**: Add the declaration of the overloaded operator function to the `Money` class declaration in `Money.h`. Ensure that the operator function is declared as a non-member friend function in the class.

2. **Definition**: Implement the overloaded operator function in the `Money.cpp` file. The function should take two `Money` objects as operands and return a new `Money` object representing their sum. Remember that this function should not modify the objects being added.

## Repository Structure

The repository is organized as follows:

- `Money.h`: This header file contains the declaration of the `Money` class, including the declaration of the overloaded `+` operator as a non-member friend function.

- `Money.cpp`: In this source file, you'll find the implementation of the overloaded `+` operator function.

- `main.cpp` (optional): You can include a `main.cpp` file to test the `Money` class and the overloaded operator function. This file can provide examples of how to use the `+` operator with `Money` objects.

## Usage

You can use this repository to understand how to implement non-member friend functions for operator overloading in C++. To use this code, you can follow these steps:

1. Clone the repository to your local machine:

```bash
g++ Money.cpp main.cpp -o money_program
```
Run the executable:
```bash
./money_program
```
This will allow you to see the implementation in action and test the functionality of the overloaded + operator with Money objects.

## Contributing
If you have suggestions for improvements or additional features, feel free to fork this repository and create a pull request. Contributions are always welcome!

## License
This project is licensed under the MIT License - see the LICENSE file for details.

