# 📦 Copying and Moving in C++ Classes
Welcome to the world of C++ class inheritance and handling copy/move constructors and overloaded operator=! In this README, we'll dive into these concepts, and how they apply to both the base and derived classes. 🧬

## 🧰 The Code
We've got a code snippet to illustrate how copy/move constructors and operator= work. The example features two classes, Base and Derived, demonstrating the creation, copying, and assignment of objects.



```cpp
class Base {
private:
    int value;
public:
    Base()
        : value{ 0 } {
        cout << "Base no-args constructor" << endl;
    }
    Base(int x)
        : value{ x } {
        cout << "int Base constructor" << endl;
    }
    Base(const Base& other)
        : value{ other.value } {
        cout << "Base copy constructor" << endl;
    }

    Base& operator=(const Base& rhs) {
        cout << "Base operator=" << endl;
        if (this == &rhs)
            return *this;
        value = rhs.value;
        return *this;
    }

    ~Base() { cout << "Base destructor" << endl; }
};

class Derived : public Base {
private:
    int doubled_value;
public:
    Derived() :
        Base{} {
        cout << "Derived no-args constructor " << endl;
    }
    Derived(int x)
        : Base{ x }, doubled_value{ x * 2 } {
        cout << "int Derived constructor" << endl;
    }
    Derived(const Derived& other)
        : Base(other), doubled_value{ other.doubled_value } {
        cout << "Derived copy constructor" << endl;
    }

    Derived& operator=(const Derived& rhs) {
        cout << "Derived operator=" << endl;
        if (this == &rhs)
            return *this;
        Base::operator=(rhs);
        doubled_value = rhs.doubled_value;
        return *this;
    }
    ~Derived() { cout << "Derived destructor " << endl; }
};

```


## 📜 Handling Copy and Move 🚚
### Copy Constructors and Operator=
C++ provides built-in mechanisms for copying and moving objects, but there are some crucial points to keep in mind:

* **Automatic Copy Constructors and Operator= 🧙‍♂️**

If you don't define copy constructors or operator= in the derived class, the compiler will create them for you automatically. It will also invoke the base class's version.
* **Defining Derived Versions 🛠️**

If you do provide your own versions in the derived class, you MUST explicitly call the base class versions when needed. It's like managing your own family history but respecting your ancestors' stories.
* **Handle Raw Pointers with Care 🧼**

When dealing with raw pointers, especially if both the base and derived classes have them, provide deep copy assignments. This ensures that each object has its own set of resources.
***🚀 Example:***
Let's take a look at how this works in the code:

```cpp
Derived d{ 100 };    // Overloaded constructor
Derived d1{ d };     // Copy constructor
d = d1;                // Copy assignment
```

In this example, we create objects of the Derived class and observe how constructors and operator= work. Notice that the base class's copy constructor and operator= are called when working with the Derived class, and you need to handle them appropriately. It's like managing your own family legacy while respecting your family's history.

By following these guidelines, you can ensure a smooth and efficient process of copying and moving objects in your C++ classes. 🎉🚚

Please feel free to use the repository as a starting point for your own adventures in C++ classes and inheritance. Explore, experiment, and enjoy the world of witcher :D! 