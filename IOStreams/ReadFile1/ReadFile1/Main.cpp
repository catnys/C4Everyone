// Section 19
// Read File 1
// Test for file open and simple read of 3 data items
#include <iostream>
#include <fstream>

int main() {
    std::ifstream in_file;
    std::string line;
    int num;
    double total;

    in_file.open("../text.txt");

    if (!in_file) { // if object is null which means file object couldn't be opened properly
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }

    in_file >> line >> num >> total;
    std::cout << line << std::endl;
    std::cout << num << std::endl;
    std::cout << total << std::endl;

    in_file.close();// DO NOT forget to close file 
    
    return 0;
}

