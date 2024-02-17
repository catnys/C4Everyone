//Section 14
// Overloading move constructor and move assignment operation
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;
int main() {
	Mystring a{ "Hello" };			// overloaded constructor
	Mystring b{ "Hola" };			// Overloaded constructor then move assignment
	a = "Bonjour";					// Overloaded constructor then move assignment

}