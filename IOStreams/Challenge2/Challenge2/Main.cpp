// Section 19
// Challenge 2 - Solution
// Automated Grader 
#include <iostream>
#include <fstream>
#include <iomanip>

//function prototypes
void print_header();
void print_footer(double average);
void print_student(const std::string& student, int score);
int process_response(const std::string& response, const std::string& answer_key);

void print_header() {
    std::cout << std::setw(15) << std::left << "Student"
        << std::setw(5) << "Score" << std::endl;
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
}

void print_footer(double average) {
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setw(15) << std::left << "Average score"
        << std::setw(5) << std::right << average;
}

void print_student(const std::string& student, int score) {
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << std::setw(15) << std::left << student
        << std::setw(5) << std::right << score << std::endl;
}

// return the number of correct responses
int process_response(const std::string& response, const std::string& answer_key) {
    int score{ 0 };
    for (size_t i = 0; i < answer_key.size(); ++i) {
        if (response.at(i) == answer_key.at(i))
            score++;
    }
    return score;
}

int main() {

    /*
    - std::string response{};

    This syntax initializes the string variable response with an empty string. 
    It's equivalent to std::string response = "";. 
    It explicitly constructs an empty string object.

    - std::string response;

    This syntax declares the string variable response without initializing it explicitly. 
    It depends on the default constructor of std::string to initialize response with an empty string.
    The default constructor sets the string to an empty state, which is the same as an empty string literal.
    */

    std::ifstream in_file;
    std::string answer_key{};
    std::string name{};
    std::string response{};
    int running_sum{ 0 };
    int total_students{ 0 };
    double average_score{ 0.0 };

    in_file.open("../responses.txt");
    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    /*
     the line in_file >> answer_key; will not read the first line until the first newline character ('\n') symbol. 
     Instead, it will read the first word (sequence of characters separated by whitespace) from the file. 
     If the "responses.txt" file contains the answer key on the first line and the answer key does not contain any whitespace,
     then this approach should work fine. However, if the answer key includes spaces or spans multiple words, 
     this method will only read the first word and leave the rest of the answer key on the first line.
     */

    in_file >> answer_key;

    print_header();

    while (in_file >> name >> response) {
        ++total_students;
        int score = process_response(response, answer_key);
        running_sum += score;
        print_student(name, score);
    }

    if (total_students != 0)
        average_score = static_cast<double>(running_sum) / total_students;

    print_footer(average_score);

    in_file.close();
    std::cout << std::endl << std::endl;
    return 0;
}

