# Overloading Stream Operators

Overloading the stream insertion (<<) and extraction (>>) operators in C++ is a technique that allows you to customize how objects of user-defined classes are formatted when they are printed to an output stream (like std::cout) and how they are read from an input stream (like std::cin). This feature is particularly useful when you want to define a custom representation of your class when used with standard input and output streams.

Here's an overview of overloading the stream insertion and extraction operators in C++:

**Overloading the Stream Insertion Operator (<<):** To overload the `<<` operator, you define a function as a friend function or as a member function of your class. This function should take two arguments: an output stream (usually std::ostream& or std::ostream) and the object you want to output (usually const YourClass&). Inside this function, you customize how the object is formatted when printed to the output stream.

Example of overloading `<<` for a custom Point class:


```cpp
std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "X: " << point.getX() << ", Y: " << point.getY();
    return os;
}
```
**Overloading the Stream Extraction Operator (>>):** To overload the `>>` operator, you define a function as a friend function or as a member function of your class. This function should take two arguments: an input stream (usually std::istream& or std::istream) and an object of your class (usually YourClass&). Inside this function, you customize how the object is read from the input stream.

Example of overloading `>>` for a custom Point class:


```cpp
std::istream& operator>>(std::istream& is, Point& point) {
    int x, y;
    is >> x >> y;
    point.setX(x);
    point.setY(y);
    return is;
}
```

Using Overloaded Operators: Once you've overloaded the stream insertion and extraction operators for your class, you can use them just like you would use the built-in << and >> operators. For example:

```cpp
Point p;
std::cin >> p;  // Read a Point object from standard input.
std::cout << p; // Print the Point object to standard output.
```

Overloading these operators can make your code more readable and user-friendly when working with custom classes, especially when you want to output objects to the console or read objects from the console in a specific format. It's a common practice when dealing with I/O in C++ to provide a well-defined representation for your objects when used with streams.