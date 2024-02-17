//Section 14
// Overloading I/O Stream
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {

	cout << boolalpha << endl;

	Mystring larry{ "Larry" };
	Mystring moe{ "moe" };
	Mystring curly;

	cout << "Enter the third stooge's first name: ";
	cin >> curly;

	cout << "The three stooges are " << larry << "," << moe << " , and " << curly << endl;

	cout << "\nEnter the three stooges names separated by a space";
	cin >> larry >> moe >> curly;
	cout << "The three stooges are " << larry << "," << moe << " , and " << curly << endl;


}