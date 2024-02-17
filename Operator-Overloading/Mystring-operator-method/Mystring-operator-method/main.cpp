//Section 14
// Overloading Copy Assignment
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {

	cout << boolalpha << endl;

	Mystring larry{ "Larry" };
	Mystring moe{ "moe" };

	Mystring stooge = larry;
	larry.display();
	moe.display();

	cout << (larry == moe) << endl;			// false
	cout << (larry == stooge) << endl;		// true

	larry.display();
	Mystring larry2 = -larry;
	larry2.display();

	Mystring stooges = larry + "moe";		// OK with member function
	// Mystring stoofes = "larry" + moe;	// Compiler Error

	Mystring twoStooges = moe + "" + "Larry";
	twoStooges.display();

	Mystring three_stooges = moe + "" + "Larry" + "" + "Curly";
	three_stooges.display();				// Moe Larry Curly


}