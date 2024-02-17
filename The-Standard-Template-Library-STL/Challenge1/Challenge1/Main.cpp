#include <iostream>
#include <deque>
#include <string>
#include <cctype> // Include the <cctype> header for isalpha and tolower

// Template function to display any deque
template <typename T>
void display(const std::deque<T>& d) {
    std::cout << "[";
    for (const auto& elem : d)
        std::cout << elem << " ";
    std::cout << "]" << std::endl;
}

bool isPalindrome(const std::string& s) {
    std::cout << "\n========================= isPalindrome =========================" << std::endl;

    // Remove non-alphanumeric characters and convert to lowercase
    std::deque<char> d;
    for (char ch : s) {
        if (std::isalnum(ch)) { // Check if the character is alphanumeric
            d.push_back(std::tolower(ch)); // Convert to lowercase and push into the deque
        }
    }

    // Check if the string is a palindrome
    while (d.size() > 1) {
        if (d.front() != d.back()) {
            std::cout << "Not a palindrome." << std::endl;
            return false;
        }
        d.pop_front();
        d.pop_back();
    }

    std::cout << "Is a palindrome." << std::endl;
    return true;
}

int main() {
    isPalindrome("A man, a plan, a canal, Panama");
    isPalindrome("racecar");
    isPalindrome("Hello");

    return 0;
}
