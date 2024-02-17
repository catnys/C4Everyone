# Section 16 Challenge - Polymorphism
In this challenge, you will work on implementing dynamic polymorphism in a class hierarchy involving accounts. You will need to modify the provided Account class and create an I_Printable class interface. Additionally, you'll update functions in the Account_Util files to support dynamic polymorphism.

## Instructions
### 1. Modify the Account Class
Make the Account class an abstract class by adding the following pure virtual functions:
```cpp
virtual bool deposit(double amount) = 0;
virtual bool withdraw(double amount) = 0;
```
You can choose to implement these functions in the Account class if it makes sense.
### 2. Create the I_Printable Interface
Create an I_Printable class interface with the following functionality:
```cpp
class I_Printable
{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() = default;
};
```
This interface allows all accounts to be printable to an ostream using the overloaded insertion operator.
### 3. Modify the Account_Util Functions
Modify the functions in the Account_Util files to work with dynamic polymorphism. Ensure that you only have one version of each function, such as:
```cpp
void display(const std::vector<Account *> &accounts);
void deposit(std::vector<Account *> &accounts, double amount);
void withdraw(std::vector<Account *> &accounts, double amount);
```
Note that the vector should contain pointers to Account objects (Account *) for dynamic polymorphism.
### 4. Test Your Code
Test your code with both base class pointers and local objects. A simple main driver is provided to get you started.
## **`Hints`**
* Reuse existing functionality.
* If your class has a virtual function, make sure to implement a virtual destructor. You can use the default destructor generation in C++ like this:
```cpp 
virtual ~Class_Name() = default; 
```
* Take the challenge one step at a time.
* Begin by making the Account class abstract by adding the pure virtual functions.
Have fun! This is a very challenging exercise that will help you grasp the concepts of dynamic polymorphism and abstract classes.