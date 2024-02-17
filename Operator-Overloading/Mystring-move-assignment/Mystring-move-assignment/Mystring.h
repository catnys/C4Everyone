#pragma once
#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
private:
	char* str; // pointer to a char[] that holds a C-style string

public:
	Mystring(); // No-args constructor
	Mystring(const char* s); // Overloaded constructor
	Mystring(const Mystring& source); // Copy constructor
	Mystring(Mystring&& source); // Move constructor
	~Mystring(); //Destructor


	Mystring& operator=(const Mystring& rhs); // Copy assignment
	Mystring& operator=(Mystring&& rhs); // Move assignment


	// Methods
	void display() const;
	int getLength() const;
	const char* getString() const;


};


#endif //_MYSTRING_H_