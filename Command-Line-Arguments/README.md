## **Command-Line Arguments**
In C++ (as in C), command-line arguments are a way to pass information to a program when it is invoked from the command line or a terminal window. These arguments are typically used to specify configuration options, input files, or any other data the program might need to operate on during its execution.

### Components of Command-Line Arguments

* **`argc (Argument Count)`**: This is an integer variable that holds the number of command-line arguments passed to the program, including the name of the program itself.
* **`argv (Argument Vector)`**: This is an array of character strings (or an array of pointers to char) where each string represents one command-line argument passed to the program. **`argv[0]`** is the name by which the program was invoked, which means the actual arguments start from **`argv[1`**].

![](https://imgur.com/TL0mqWd.png)

### How Command-Line Arguments Work

When a C++ program starts, the main function is called by the operating system. The main function in C++ can be written to accept these two parameters—argc and argv—which the operating system populates with the command-line arguments:

```cpp
int main(int argc, char *argv[]) {
    // Your code here
}
```

### Usage Example

Consider you have a program that needs to read a file, and you want to specify the file name at the time you run the program. You could use command-line arguments to achieve  this:

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " <filename>" << endl;
        return 1; // Exit with error code
    }

    ifstream file(argv[1]);
    if (!file) {
        cout << "File cannot be opened!" << endl;
        return 1; // Exit with error code
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0; // Success
}
```

### Key Points
- The first argument argv[0] is the program's own name.
- The actual user arguments start from argv[1].
- It is common practice to check if the number of arguments (argc) is sufficient for the program’s requirements before attempting to use them.
- Command-line arguments are widely used for scripts, utilities, and programs where quick configuration without user interaction is desirable.

---

## How to run a program from Termial using Command-Line Arguments ?

To run a program from the terminal with command-line arguments like ./mario 8, you first need to make sure that you have a compiled executable file. Here’s a step-by-step guide on how to compile and run a program in C or C++ on a Unix-based system (such as Linux or macOS) from the terminal:

#### Step 1: Write Your Program
Let's assume you have a simple C++ program that prints a "Mario-like" pyramid of a specified height, provided by the user through the command line. Here’s an example of what that program might look like:

```cpp
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <height>" << std::endl;
        return 1; // Exit with error status if the number of arguments is incorrect
    }

    int height = std::atoi(argv[1]); // Convert the argument to an integer

    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < height - i; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i; j++) {
            std::cout << "#";
        }
        std::cout << std::endl;
    }

    return 0;
}
```
#### Step 2: Save Your Program
Save this code in a file named `mario.cpp`.

#### Step 3: Compile Your Program
Open your terminal and navigate to the directory where your `mario.cpp` file is located. Compile the program using a C++ compiler such as g++:

```
g++ -o mario mario.cpp
```

This command tells g++ to compile `mario.cpp` and create an executable named mario.

#### Step 4: Run Your Program
Once the program is compiled without errors, you can run it by typing:

```
./mario 8
````

This command executes the mario executable with `8` as the command-line argument, which represents the height of the pyramid.

### Additional Tips
- Ensure you have the necessary permissions to execute the file. If not, you might need to make it executable using chmod +x mario.
- If you encounter errors during compilation, check your code for syntax errors or typos.
- If using a different operating system or setup, the exact compile commands or steps might vary slightly.
- By following these steps, you can compile and run a C++ program from the terminal using command-line arguments.
