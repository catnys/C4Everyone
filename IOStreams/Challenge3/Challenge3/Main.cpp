// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <ostream>
#include <string>
#include <fstream>
#include <istream>


/*

std::string::npos is used to represent an invalid or "not found" position within a string. 
It's a special constant value defined in the C++ Standard Library to indicate that a particular operation couldn't find what it was looking for.

For example, when you use the std::string::find method to search for a substring within a string, it returns a position if it finds the substring. 
However, if it doesn't find the substring, it returns std::string::npos as a way of saying "not found."

#include <iostream>
#include <string>

{
    std::string str = "Hello, world!";
    std::string substring = "world";

    std::size_t found = str.find(substring);

    if (found != std::string::npos) {
        std::cout << "Substring found at position " << found << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

}


In this code, std::string::npos is used as a sentinel value to indicate that the substring was not found within the str.
If the substring is found, the find method returns the position where it starts;
otherwise, it returns std::string::npos, allowing you to check for the "not found" condition.

*/


bool isSubstring(const std::string& word2Find, const std::string& target) {

    std::size_t found = target.find(word2Find);

    if (found == std::string::npos) // std::string::npos as a way of saying "not found."
        return false;
    else
        return true;

}

/* OR we can use the method below in more simple manner.

bool isSubstring(const std::string& word2Find, const std::string& target) {
    return target.find(word2Find) != std::string::npos;
}

*/


int main() {
    
    std::ifstream inFile{};
    std::string wordToFind{};
    std::string wordRead{};
    int wordCount{};
    int matchCount{};

    inFile.open("../romeoandjuliet.txt");
    
    if (!inFile) {
        std::cerr << "Problem opening file" << std::endl;
        return -1;
    }

    std::cout << "Enter the substring to search for: ";
    std::cin >> wordToFind;

    while (inFile >> wordRead) {
        wordCount++;
        if (isSubstring(wordToFind, wordRead)) {
            matchCount++;
        }
    }

    std::cout << wordCount << " words were searched... " << std::endl;
    std::cout << "The Substring " << wordToFind << " was found " << matchCount << " times. " << std::endl;
    return 0;
}

