#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

struct Person {
    std::string name;
    int age;
    double score;
};

int main() {
    // Open the file
    std::ifstream inputFile("input.txt");

    // Check if the file is open
    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1; // Return an error code
    }

    // Read data from the file line by line
    std::string line;
    while (std::getline(inputFile, line)) {
        // Use std::istringstream to extract data from each line
        std::istringstream iss(line);

        // Variables to store the extracted data
        std::string name;
        int age;
        double score;

        // Extract data from the line
        iss >> name >> age >> score;

        // Create a Person object with the extracted data
        Person person{ name, age, score };

        // Do something with the person data (for example, print it)
        std::cout << "Name: " << person.name << ", Age: " << person.age << ", Score: " << person.score << std::endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}
