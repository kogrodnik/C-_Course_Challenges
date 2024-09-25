#include <iostream>
#include <vector> 

void printMenu() {
    std::cout << '\n';
    std::cout << "P - Print numbers" << '\n';
    std::cout << "A - Add a number" << '\n';
    std::cout << "M - Display mean of the number" << '\n';
    std::cout << "S - Display the smallest number" << '\n';
    std::cout << "L - Display the largest number" << '\n';
    std::cout << "Q - Quit" << '\n' << '\n';
    std::cout << "Enter your choice: ";
}

char getSelection() {
    char userChoice {};
    std::cin >> userChoice;
    return toupper(userChoice);
}

void printNumbers(const std::vector<int> &vec) {
    if (vec.empty()) {
        std::cout << "[] - the list is empty" << '\n';
    } else {
        std::cout << "[ ";
        for (const auto& el : vec) {
            std::cout << el << " ";
        }
        std::cout << "]";
    }
} 

void addNumberToTheList(std::vector<int> &vec) {
    std::cout << "Enter a integer to add to the list: ";
    int numberToAdd {};
    std::cin >> numberToAdd;
    vec.push_back(numberToAdd);
    std::cout << numberToAdd << " added" << '\n';
}

void printMeanOfNumbers(const std::vector<int> &vec) {
    if (vec.empty()) {
        std::cout << "Unable to calculate the mean - no data" << '\n';
    } else {
        double mean {};
        for (const auto& el : vec) {
            mean += el;
        }
        mean /= vec.size();
        std::cout << "The mean is: " << mean << '\n';
    }
}

void printTheSmallestNumber(const std::vector<int> &vec) {
    if (vec.empty()) {
        std::cout << "Unable to determinate the smallest number - list is empty" << '\n';
    } else {
        int smallestNumber {*vec.begin()};
        for (const auto& el : vec) {
            if (el < smallestNumber) {
                smallestNumber = el;
            }
        }
        std::cout << "The smallest number is: " << smallestNumber << '\n';
    }
}

void printTheLargestNumber(const std::vector<int> &vec) {
    if (vec.empty()) {
        std::cout << "Unable to determinate the largest number - list is empty" << '\n';
    } else {
        int largestNumber {*vec.begin()};
        for (const auto& el : vec) {
            if (el > largestNumber) {
                largestNumber = el;
            }
        }
        std::cout << "The largest number is: " << largestNumber << '\n';
    }
}

int main() { 
    std::vector<int> vec;
    char userChoice {};

    do {
        printMenu();
        userChoice = getSelection();

        switch(userChoice) {
            case 'P':
                printNumbers(vec);
                break;

            case 'A': 
                addNumberToTheList(vec);
                break;

            case 'M':
                printMeanOfNumbers(vec);
                break;

            case 'S':
                printTheSmallestNumber(vec);
                break;

            case 'L':
                break;  

            case 'Q':
                std::cout << "Goodbye" << '\n'; 
                break;

            default: 
                std::cout << "Unknown selection, please try again" << '\n';
        }

    } while(userChoice != 'Q');

    return 0;
}