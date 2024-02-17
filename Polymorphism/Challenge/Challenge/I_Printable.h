#pragma once 
#ifndef _I_PRINTABLE_
#define _I_PRINTABLE_
#include <iostream>
#include <string>

class I_Printable
{
    friend std::ostream& operator<<(std::ostream& os, const I_Printable& obj);
public:
    virtual void print(std::ostream& os) const = 0;
    virtual ~I_Printable() = default;
};
#endif