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



// Equality
bool Mystring::operator==(const Mystring& rhs) const {
	return (std::strcmp(str, rhs.str) == 0);
}


// Make lowercase
Mystring Mystring::operator-() const {
    char* buff = new char[std::strlen(str) + 1];

    strcpy_s(buff, std::strlen(str) + 1, str); // copy str --> buff

    for (size_t i = 0; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);

    Mystring temp{ buff };
    delete[] buff; // release memory
    return temp;
}

//Concatenate
Mystring Mystring::operator+(const Mystring& rhs) const {
	size_t len = std::strlen(str) + std::strlen(rhs.str) + 1;
	char* buff = new char[len];

	strcpy_s(buff, len, str); // copy str --> buff
	strcat_s(buff, len, rhs.str);

	Mystring temp{ buff };
	delete[] buff;
	return temp;
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