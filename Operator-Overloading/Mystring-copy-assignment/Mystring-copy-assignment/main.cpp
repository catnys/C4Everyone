//Section 14
// Overloading Copy Assignment
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;
int main() {
	Mystring a { "Hello" };			// overloaded constructor
	Mystring b;						// no-args constructor
	b = a;							// copy assignment
									// b.operator = (a)
	b = "This is a test.";			// b.operator=tihs("This is a test.")

}