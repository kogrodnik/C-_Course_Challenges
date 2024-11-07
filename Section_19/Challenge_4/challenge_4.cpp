#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    constexpr int width {5};
    std::ifstream inputFile {};
    std::ofstream outputFile {"romeoandjulietwithlinenumber"};
    std::string line {};
    int lineNumber {0};

    inputFile.open("romeoandjuliet.txt");
    if (!inputFile) {
        std::cerr << "Error opening file" << '\n';
        return 1;
    }

    while (getline(inputFile, line)) {
        lineNumber++;
        outputFile << std::setw(width) << std::left << lineNumber << line << '\n';
    }

    std::cout << "Copy complete" << '\n';
    return 0;
}