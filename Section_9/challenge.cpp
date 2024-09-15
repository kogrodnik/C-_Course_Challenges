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

int main() { 
    std::vector<int> vec;
    char userChoice {};
    int numberToAdd {0};

    do {
        printMenu();
        std::cin >> userChoice;

        switch(userChoice) {
            case 'p':
            case 'P':
                if(vec.empty()) {
                    std::cout << "[] - the list is empty" << '\n';
                } else {
                    std::cout << "[ ";
                    for(const auto& el : vec) {
                        std::cout << el << " ";
                    }
                    std::cout << "]";
                }
                break;

            case 'a':
            case 'A': 
                std::cout << "Enter a integer to add to the list: ";
                std::cin >> numberToAdd;
                vec.push_back(numberToAdd);
                std::cout << numberToAdd << " added" << '\n';
                break;

            case 'm':
            case 'M':
                if(vec.empty()) {
                    std::cout << "Unable to calculate the mean - no data"  << '\n';
                } else {
                    double mean {0};
                    for(const auto& el : vec) {
                        mean += el;
                    }
                    mean /= vec.size();
                    std::cout << "The mean is: " << mean << '\n';
                }
                break;

            case 's':
            case 'S':
                if(vec.empty()) {
                    std::cout << "Unable to determinate the smallest number - list is empty" << '\n';
                } else {
                    int smallestNumber {*vec.begin()};
                    for(const auto& el : vec) {
                        if(el < smallestNumber) {
                            smallestNumber = el;
                        }
                    }
                    std::cout << "The smallest number is: " << smallestNumber << '\n';
                }
                break;

            case 'l':
            case 'L':
                if(vec.empty()) {
                    std::cout << "Unable to determinate the largest number - list is empty" << '\n';
                } else {
                    int largestNumber {*vec.begin()};
                    for(const auto& el : vec) {
                        if(el > largestNumber) {
                            largestNumber = el;
                        }
                    }
                    std::cout << "The largest number is: " << largestNumber << '\n';
                }
                break;  

            case 'q':
            case 'Q':
                std::cout << "Goodbye" << '\n'; 
                break;

            default: 
                std::cout << "Unknown selection, please try again" << '\n';
        }

    } while(userChoice != 'q' && userChoice != 'Q');

    return 0;
}