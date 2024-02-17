# Exception Handling

Exception handling is a crucial aspect of modern programming, providing a way to gracefully deal with unexpected situations in your code. In this friendly and fascinating medium blog post, we will explore the world of exception handling in C++. We'll cover what exceptions are, why they matter, how try-catch blocks work, provide real-life examples, and offer best practices to make your code robust and maintainable.

## 📌What is an exception ?
An exception is an unforeseen error or exceptional condition that occurs during program execution, disrupting the normal flow of a program. These exceptions can include things like division by zero, invalid file access, or running out of memory. In C++, exceptions are represented as objects that encapsulate information about the error, such as its type and message.

## 🌟 Try Block (try):
The try block is used to enclose the code where you expect an exception might be thrown. This code is often referred to as the "protected" code. If an exception is thrown within the try block, the program looks for a matching catch block to handle it.

```cpp
try {
    // Code that may throw an exception
}
```
## 🏈 Throw Statement (throw):
The throw statement is used to explicitly raise an exception within the try block. You can throw different types of exceptions, such as built-in types or user-defined exception classes.

```cpp
throw SomeException("An error occurred");
```
##  🔴 Catch Blocks (catch):
catch blocks are used to catch and handle exceptions thrown in the associated try block. Each catch block specifies the type of exception it can handle. When an exception is thrown, the program checks each catch block to find a match for the thrown exception type. If a match is found, the code inside the corresponding catch block is executed.

```cpp
try {
    // Code that may throw an exception
}
catch (SomeExceptionType &e) {
    // Handle SomeExceptionType
}
catch (AnotherExceptionType &e) {
    // Handle AnotherExceptionType
}
catch (...) {
    // Handle all other exceptions
}
```
The catch block with an ellipsis (...) is a catch-all block that can handle any exception not caught by the previous catch blocks. It's usually placed at the end.

## ✨Exception Classes:
In C++, you can use both built-in exception types (like std::exception) and user-defined exception classes. User-defined exception classes are often derived from std::exception and contain additional information about the exception.

```cpp
class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "My custom exception occurred";
    }
};
```
##  🌟Standard Library Exceptions:
C++ provides a set of standard exceptions that are derived from std::exception. These can be used directly or as base classes for custom exceptions. Some common standard exceptions include std::runtime_error, std::logic_error, and std::out_of_range.

##  💎Rethrowing Exceptions:
You can rethrow an exception from within a catch block using the throw statement. This allows you to handle an exception at one level and then propagate it up to a higher-level handler.

```cpp
try {
    // Code that may throw an exception
}
catch (SomeExceptionType &e) {
    // Handle SomeExceptionType
    throw; // Rethrow the exception
}
```
##  🎈Exception Safety:
Exception safety is an important concept. It classifies code into three levels: no-throw, basic guarantee, and strong guarantee, depending on how it handles exceptions. Writing code that provides a strong guarantee means that if an exception occurs, the program remains in a consistent state.

Here's a simple example:

```cpp
#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}

int main() {
    try {
        int result = divide(10, 0);
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    return 0;
}
```
In this example, the divide function can throw an exception if b is zero. The exception is caught in the main function and an error message is displayed.

**Free Writeup, Hell Yeah !**

[//]: # (These are reference links used in the body of this note and get stripped out when the markdown processor does its job. There is no need to format nicely because it shouldn't be seen Noted. Thanks SO - :D )
