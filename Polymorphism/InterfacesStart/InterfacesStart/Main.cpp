// Section 16
// Interfaces - start

#include <iostream>

class Account {

	friend std::ostream& operator<<(std::ostream& os, const Account& acc);
public:
	virtual void withdraw(double amount) {
		std::cout << "In Accoutn::withdraw" << std::endl;
	}
	virtual ~Account() {}

};

std::ostream& operator<<(std::ostream& os, const Account& acc) {
	os << "Account Display";
	return os;
}

class Checking : public Account {

	friend std::ostream& operator<<(std::ostream& os, const Checking& acc);
public:
	virtual void withdraw(double amount) {
		std::cout << "In Checking::withdraw" << std::endl;
	}
	virtual ~Checking() {}


};


std::ostream& operator<<(std::ostream& os, const Checking& acc) {
	os << "Checking Display";
	return os;
}

class Savings : public Account {
	friend std::ostream& operator<<(std::ostream& os, const Savings& acc);
public:
	virtual void withdraw(double amount) {
		std::cout << "In Savings::withdraw" << std::endl;
	}
	virtual ~Savings() {}
	
};


std::ostream& operator<<(std::ostream& os, const Savings& acc) {
	os << "Savings Display";
	return os;
}

class Trust : public Account {
	friend std::ostream& operator<<(std::ostream& os, const Savings& acc);
public:
	virtual void withdraw(double amount) {
		std::cout << "In Trust::withdraw" << std::endl;
	}
	virtual ~Trust() {}

};


std::ostream& operator<<(std::ostream& os, const Trust& acc) {
	os << "Trust Display";
	return os;
}


int main() {

	Account* ptr1 = new Account();
	std::cout << *ptr1 << std::endl;

	Account* ptr2 = new Checking();
	std::cout << *ptr2 << std::endl;

	/*Account a;
	Checking c;
	Savings s;
	Trust t;

	std::cout << a << std::endl;
	std::cout << s << std::endl;
	std::cout << c << std::endl;
	std::cout << t << std::endl;
	*/

	return 0;
}