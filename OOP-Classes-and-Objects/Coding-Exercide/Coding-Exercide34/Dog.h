#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:

    //---- WRITE YOUR CLASS FUNCTIONS BELOW THIS LINE----
    int get_age() {
        return this->age;
    }

    void set_age(int age) {
        this->age = age;
    }

    string get_name() {
        return this->name;
    }

    void set_name(string name) {
        this->name = name;
    }

    //---- WRITE YOUR CLASS FUNCTIONS ABOVE THIS LINE----
};
#endif 
