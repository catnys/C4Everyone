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
		size_t len = std::strlen(s) + 1;
		str = new char[len];
		strcpy_s(str, len, s);
	}
}

// Copy Constructor
Mystring::Mystring(const Mystring& source)
	: str{ nullptr } {
	size_t len = std::strlen(source.str) + 1;
	str = new char[len];
	strcpy_s(str, len, source.str);
}


// Destructor
Mystring::~Mystring() {
	delete[] str;
}

// Display method
void Mystring::display() const {
	std::cout << str << " : " << getLength() << std::endl;

}



// Copy Assignment
Mystring& Mystring::operator=(const Mystring& rhs) {
	std::cout << "Copy assignment" << std::endl;

	if (this == &rhs) {
		return *this;
	}

	delete[] this->str;

	size_t len = std::strlen(rhs.str) + 1;
	str = new char[len];
	strcpy_s(this->str, len, rhs.str);

	return *this;
}


// length getter
int Mystring::getLength() const { return std::strlen(str); }

// string getter
const char* Mystring::getString() const { return str; }