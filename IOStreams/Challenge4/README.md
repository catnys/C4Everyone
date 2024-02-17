# Section 19 - Challenge 4: Copy Romeo and Juliet with Line Numbers

Welcome to the world of literary coding! In this challenge, we'll embark on a creative journey with the timeless masterpiece, "Romeo and Juliet" by William Shakespeare. Your task is to create a copy of this literary gem, but with a delightful twist – adding line numbers to every line of the play.

## The Challenge

### Step 1: Duplicate the Text

Your first mission is to duplicate the text of "Romeo and Juliet" from the provided file, `romeoandjuliet.txt`. Create a fresh canvas for your creativity by saving the duplicated content to a new file.

### Step 2: Line Numbers

Now, for the creative part! You're tasked with adding line numbers to each line in the play. Imagine giving each line its unique identity, helping readers navigate this classic with ease. But it's not just about the numbers; it's about style. Ensure that your line numbers are elegantly formatted and align perfectly with the text, making the entire play a visual delight.

## Going the Extra Mile

If you're feeling particularly adventurous, consider going the extra mile with this challenge:

- Provide line numbers only for lines that actually contain text. This minimalist approach will enhance the readability and aesthetics of your creation.

## Prerequisites

Before you embark on this coding adventure, make sure you have the following:

- A C++ development environment (such as a compiler like GCC).
- The provided `romeoandjuliet.txt` file containing the text of the play.

## Getting Started

To begin, create a new C++ program that reads the content of `romeoandjuliet.txt`, duplicates it, adds line numbers, and saves the enriched play to a new file.

## Example Code

Here's a simple example in C++ to help you get started:

```cpp
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inFile("romeoandjuliet.txt");
    std::ofstream outFile("romeoandjuliet_with_line_numbers.txt");
    std::string line;
    int lineNumber = 1;

    while (std::getline(inFile, line)) {
        if (!line.empty()) {
            outFile << lineNumber << ". " << line << std::endl;
            lineNumber++;
        }
    }

    inFile.close();
    outFile.close();

    return 0;
}
```
