# 🚀 Constructors and Destructors in Inheritance
Welcome to the exciting world of C++ inheritance! In this guide, we'll explore the fascinating behavior of constructors and destructors when using inheritance. 🧬
```cpp
class Base {
private:
	int value;
public:
	Base() : value{ 0 } { cout << "Base no-args constructor" << endl; }
	Base(int x) : value{ x } { cout << "Base (int) overloaded constructor" << endl; }
	~Base() { cout << "Base destructor" << endl; }
};


class Derived : public Base {

private: 
	int doubled_value;
public:
	Derived() : doubled_value{ 0 } { cout << "Derived no-args constructor" << endl; }
	Derived(int x) : doubled_value{ x*2 } { cout << "Derived (int) overloaded constructor" << endl; }
	~Derived() { cout << "Derived destructor" << endl; }

};
```
## Constructors 🏗️
### The Inheritance Connection 🪢
Inheritance is like sharing family traits among classes. When a class (the derived class) inherits from another class (the base class), it gets all the attributes and functions of the parent. 🧬

### Constructing the Lineage 🏗️
When a new object of the derived class is born, it has to follow a family tradition:

The base class constructor is the first to throw a welcome party.
Next, the derived class constructor joins the celebration.
The base class needs to be ready before the derived class starts to dance. 💃🕺

🚀 Example:
```cpp
Derived d;
// Output:
// Base no-args constructor
// Derived no-args constructor
```
## Destructors ☠️
### The Art of Closure 🚪
Now, let's talk about endings. When an object's time comes to say goodbye, the sequence is different:

The derived class destructor gets to say its goodbyes first.
Then, it's time for the base class destructor's farewell.
This order is crucial because each class should clean up its own mess. 🧹

### Tidying Up 🧽
Destructors play a crucial role in cleaning up the party. They help prevent memory leaks and make sure resources are released correctly. Each destructor is like a cleanup crew for its own class.

☠️ Example:
```cpp
Derived d{ 20 };
// Output:
// Base no-args constructor
// Derived (int) overloaded constructor
// Derived destructor
// Base destructor
```
In this code example, the destructor sequence mirrors the reverse of the constructor order. The derived class destructor takes a bow before the base class destructor steps in.

By following this inheritance protocol, you can have neat and tidy code, free of resource leaks and memory issues. 😇🪣

Feel free to use the provided C++ code snippet as a starting point for your own inheritance adventures. Explore, experiment, and have fun building C++ classes that inherit their way to greatness! 🚀👩‍💻

