//Section 15
//Constructors and Destructors
#include <iostream>

using namespace std;

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


int main() {
	//Base b;
	//Base b{ 100 };


	/*	Derived d; 
		Base no-args constructor
		Derived no-args constructor
		Derived destructor
		Base destructor	
	*/


	/*
		Derived d{ 20 };
		Base no-args constructor
		Derived (int) overloaded constructor
		Derived destructor
		Base destructor
	
	*/
	

	return 0;
}