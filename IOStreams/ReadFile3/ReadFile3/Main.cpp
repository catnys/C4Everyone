#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main() {
    /* 
        In C++, both std::string response{}; and std::string response; are used to declare a string variable, 
        but there is a difference in how they are initialized.

        std::string response{};

        This syntax initializes the string variable response with an empty string. It's equivalent to std::string response = "";. 
        It explicitly constructs an empty string object.

        std::string response;

        This syntax declares the string variable response without initializing it explicitly. 
        It depends on the default constructor of std::string to initialize response with an empty string. 
        The default constructor sets the string to an empty state, which is the same as an empty string literal.
     */

    std::ifstream in_file;
    std::string answerKey{};
    std::string name{};
    std::string response{}; // this initialized to empty string as std::string response = ""; 




    std::ifstream in_file("responses.txt"); // Open the file

    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }

    std::string answer_key;
    stdgetline(in_file, answer_key); // Read the answer key from the first line

    std::string student_name;
    std::string student_responses;

    int total_students = 0;
    int total_score = 0;

    int max_name_width = 0;

    std::cout << std::left << std::setw(30) << "Student" << std::setw(10) << "Score" << "\n";
    std::cout << std::setfill('-') << std::setw(40) << "" << std::setfill(' ') << "\n";

    while (std::getline(in_file, student_name) && std::getline(in_file, student_responses)) {
        int score = 0;
        for (size_t i = 0; i < answer_key.length(); ++i) {
            if (student_responses[i] == answer_key[i]) {
                score++;
            }
        }

        max_name_width = std::max(max_name_width, static_cast<int>(student_name.length()));

        std::cout << std::left << std::setw(max_name_width + 2) << student_name << std::setw(10) << score << "\n";

        total_students++;
        total_score += score;
    }

    in_file.close();

    if (total_students > 0) {
        double average_score = static_cast<double>(total_score) / total_students;
        std::cout << std::setfill('-') << std::setw(40) << "" << std::setfill(' ') << "\n";
        std::cout << std::left << std::setw(max_name_width + 2) << "Average score" << std::setw(10) << std::fixed << std::setprecision(1) << average_score << "\n";
    }

    return 0;
}
