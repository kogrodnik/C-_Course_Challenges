#include <iostream>

int main() {
    int numberOfSmallRooms {};
    int numberOfLargeRooms {};
    int pricePerSmallRoom {25};
    int pricePerLargeRoom {35};
    double cost {};
    double tax {0.06};
    double taxPrice {};

    std::cout << "Hello, wellcome to Frank's Carpet Cleaning Service\n\n";

    std::cout << "How many small rooms would you like cleaned? ";
    std::cin >> numberOfSmallRooms;

    std::cout << "How many large rooms would you like cleaned? ";
    std::cin >> numberOfLargeRooms;

    cost = (numberOfSmallRooms * pricePerSmallRoom) + (numberOfLargeRooms * pricePerLargeRoom);
    taxPrice = cost * tax;

    std::cout << "\nEstimate for carpet cleaning service\n";
    std::cout << "Number of small rooms:" << numberOfSmallRooms << '\n';
    std::cout << "Number of large rooms:" << numberOfLargeRooms << '\n';
    std::cout << "Price per small room: $" << pricePerSmallRoom << '\n';
    std::cout << "Price per large room: $" << pricePerLargeRoom << '\n';
    std::cout << "Cost: $" << cost << '\n';
    std::cout << taxPrice << '\n';
    std::cout << "===================================================\n";
    std::cout << "Total estimate: $" << cost + taxPrice << '\n';
    std::cout << "This estimate is valid for 30 day\n"; 

    return 0;
}
