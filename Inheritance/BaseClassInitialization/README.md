# 🚀 Inheriting and Constructing in C++
Welcome to the world of C++ (the witcher's world) inheritance and class constructors! In this README, we'll explore how base and derived classes come to life, and the order of their construction. 🧬

## 🛠️ The Code
Here's a code snippet to illustrate the concept of constructors in inheritance. It defines two classes, Base and Derived, with constructors and destructors. These classes interact to demonstrate how the process works.

```cpp
// Section 15
// Base class initialization
#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
    Base() : value{ 0 } {
        cout << "Base no-args constructor" << endl;
    }
    Base(int x) : value{ x } {
        cout << "Base (int) overloaded constructor" << endl;
    }
    ~Base() {
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base {
private:
    int doubled_value;
public:
    Derived()
        :Base{}, doubled_value{ 0 } {
        cout << "Derived no-args constructor " << endl;
    }
    Derived(int x)
        : Base{ x }, doubled_value{ x * 2 } {
        cout << "Derived (int) constructor" << endl;
    }
    ~Derived() {
        cout << "Derived destructor " << endl;
    }
};

int main() {
    //  Derived d;
    Derived d{ 1000 };
    return 0;
}
```
## 🏗️ Constructing the Inheritance 🧬
### 🪢 The Inheritance Connection
Inheritance is like passing on the family tradition. A class (the derived class) inherits attributes and methods from another class (the base class), which is like its parent. This inheritance allows the derived class to benefit from the traits of the base class. 🤝

### 🏗️ Constructor Order
When an object of the derived class is created, it follows a specific sequence:

The base class constructor is the first to throw a welcome party.
Next, the derived class constructor joins the celebration.
The base class needs to be ready before the derived class starts its own journey. It's like a family tree where the base class is the root, and the derived class is a branch. 🌳

🎉 Example:
```cpp
Derived d{ 1000 };
// Output:
// Base (int) overloaded constructor
// Derived (int) constructor
```
## ☠️ Destructing the Inheritance 🚪
### 🧽 The Art of Closure
Now, let's talk about endings. When an object's time comes to say goodbye, the sequence is different:

The derived class destructor gets to say its goodbyes first.
Then, it's time for the base class destructor's farewell.
This order is crucial because each class should clean up its own mess. Think of it as a family gathering where you need to clean up your own plate! 🍽️

### 🧹 Resource Cleanup
Destructors play a crucial role in cleaning up the party. They help prevent memory leaks and make sure resources are released correctly. Each destructor is like a cleanup crew for its own class.

☠️ Example:
```cpp
Derived d{ 1000 };
// Output:
// Derived destructor
// Base destructor
```
In this code example, the destructor sequence mirrors the reverse of the constructor order. The derived class destructor takes a bow before the base class destructor steps in. It's like saying goodbye to your family and friends before leaving a gathering. 👋👨‍👩‍👧‍👦

By following this inheritance protocol, you can have neat and tidy code, free of resource leaks and memory issues. 😇🚀

Feel free to use this code snippet as a starting point for your own inheritance adventures. Explore, experiment, and have fun building C++ classes that inherit their way to greatness!🌸