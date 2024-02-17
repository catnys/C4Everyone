# Virtual Functions in C++

In C++, virtual functions are a powerful feature that enables polymorphism, one of the key principles of object-oriented programming (OOP). They allow you to achieve runtime polymorphism, where the appropriate function to be called is determined at runtime based on the actual object type.

## Basics of Virtual Functions

- A **virtual function** is a member function of a class that is declared as `virtual` in the base class and can be overridden in derived classes.

## Benefits of Virtual Functions

- **Polymorphism:** Virtual functions enable polymorphism, allowing you to work with objects of different classes in a uniform way.

- **Dynamic Binding:** The appropriate function is selected at runtime based on the object's actual type, which provides dynamic behavior.

- **Extensibility:** Virtual functions make your code more extensible, allowing you to add new derived classes without modifying the existing code.

## Example

Here's a simple example demonstrating the use of virtual functions:

```cpp
#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    Shape* shape1 = new Circle;
    shape1->draw(); // Calls the draw() function of Circle.
    
    Shape* shape2 = new Shape;
    shape2->draw(); // Calls the draw() function of Shape.

    delete shape1;
    delete shape2;

    return 0;
}
```