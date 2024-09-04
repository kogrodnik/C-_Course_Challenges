#include <iostream> 

int main() {
    int favoriteNumer {};
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favoriteNumer;

    std::cout << "Amazing!! That's my favorite number too!\n";
    std::cout << "No really!! " << favoriteNumer << " is my favorite number!\n";

    return 0;
}