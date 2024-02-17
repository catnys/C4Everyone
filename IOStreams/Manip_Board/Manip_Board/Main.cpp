// Section 19
// Stream manipulators - Field width, justification and setfill test bench
// setw, left, right, setfill
#include <iostream>
#include <iomanip>

void ruler() {
    std::cout << "\n123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890" << std::endl;
}

int main() {
    int num1{ 9876 };
    double num2{ 1234.5678 };
    std::string hello{ "Hello" };
    
    
    // Defaults
    std::cout << "\n-=[- Defaults -]=-------------------------------------------------------------------------" << std::endl;
    ruler();
    std::cout << num1
        << num2
        << hello
        << std::endl;
    



    // Setfill
    std::cout << "\n-=[- Defaults -]=-------------------------------------------------------------------------" << std::endl;
    ruler();
    std::cout << std::setfill('=');
    std::cout << std::setw(10) << num1
        << std::setfill('*') << std::setw(20) << num2
        << std::setfill('#') << std::setw(20) << hello
        << std::endl;




/*
    std::cout << "\n-=[- Def -]=-------------------------------------------------------------------------" << std::endl;
    ruler();
    std::cout << std::setw(10) << num1
        << std::setw(10) << num2 // num will be printed as 6 digits INCLUDING 1 DOT = 7 characters in total !!!
        << std::setw(10) << hello
        << std::endl;
    std::cout << "\n-=[- Right -]=-------------------------------------------------------------------------" << std::endl;
    ruler();
    std::cout << std::setw(10) << num1
        << std::setw(10) << std::right << num2 // num will be printed as 6 digits INCLUDING 1 DOT = 7 characters in total !!!
        << std::setw(10) << hello
        << std::endl;



    std::cout << "\n-=[- setw(X) -]=-------------------------------------------------------------------------" << std::endl;
    ruler();
    std::cout << std::setw(10) << num1
        << std::setw(7) << num2 // num will be printed as 6 digits INCLUDING 1 DOT = 7 characters in total !!!
        << hello
        << std::endl;

        // left --> bring the 'spaces' or whatever the symbol is, to the left !
    std::cout << "\n-=[- Left -]=-------------------------------------------------------------------------" << std::endl;
    ruler();
    std::cout << std::setw(10) << std::left << num1 // take the number to the left and the spaces to the right ^-^
        << std::left << std::setw(10) << num2  
        << hello
        << std::endl;


    std::cout << "\n-=[- Left Vice Versa -]=-------------------------------------------------------------------------" << std::endl;
    ruler();
    std::cout << std::setw(10) << std::left << num1 // take the number to the left and the spaces to the right ^-^
        << std::setw(10) << std::left << num2
        << hello
        << std::endl;

*/



    return 0;
}

