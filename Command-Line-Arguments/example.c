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
