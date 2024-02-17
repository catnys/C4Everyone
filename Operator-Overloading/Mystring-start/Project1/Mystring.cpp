#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args Constructor
Mystring::Mystring()
	:str{ nullptr } {
	str = new char[1];
	*str = '\0';
}

// Overloaded Constructor
Mystring::Mystring(const char* s)
	: str{ nullptr } {
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		str = new char[std::strlen(s) + 1];
		std::strcpy(str, s);
	}
}


// Copy Constructor
Mystring::Mystring(const Mystring& source)
	: str{ nullptr } {
	str = new char[std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring() {
	delete[] str;
}

// Display method
void Mystring::display() const {
	std::cout << str << " : " << getLength() << std::endl;

}


// length getter
int Mystring::getLength() const { return std::strlen(str); }

// string getter
const char* Mystring::getString() const { return str; }