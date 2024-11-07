#include <iostream> 
#include <fstream> 

bool searchForSubstring(const std::string &searchingString, const std::string &readingWord) {
    int substringIndex = readingWord.find(searchingString);
    if (substringIndex == std::string::npos) {
        return false;
    }
    return true;
}

int main() {
    int wordsNumber {0};
    int searchingStringNumber {0};
    std::string searchingString {};
    std::string readingWord {};
    std::ifstream file {};

    file.open("romeoandjuliet.txt");
    if (!file) {
        std::cerr << "Error opening file" << '\n';
        return 1;
    }

    std::cout << "Enter the substring to search for: ";
    std::cin >> searchingString;

    while (file >> readingWord) {
        wordsNumber++;
        if (searchForSubstring(searchingString, readingWord)) {
            searchingStringNumber++;
        }
    }

    std::cout << wordsNumber << " words were searched..." << '\n';
    std::cout << "The substring " << searchingString << " was found " << searchingStringNumber << " times." << '\n';
    return 0;
}