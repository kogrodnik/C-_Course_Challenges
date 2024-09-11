#include <iostream> 
#include <vector> 

void print(const std::vector<int> &vec) {
    for(const auto &el : vec) {
        std::cout << el << " ";
    }
    std::cout << '\n' << vec.size() << '\n';
} 

int main() {
    std::vector<int> firstVector;
    std::vector<int> secondVector;

    firstVector.push_back(10);
    firstVector.push_back(20);
    print(firstVector);

    secondVector.push_back(100);
    secondVector.push_back(200);
    print(secondVector);

    std::vector<std::vector<int>> vector2D; 
    vector2D.push_back(firstVector);
    vector2D.push_back(secondVector);
    std::cout << vector2D.at(0).at(0) << " "
              << vector2D.at(0).at(1) << " "
              << vector2D.at(1).at(0) << " "
              << vector2D.at(1).at(1) << " "
              << '\n';

    firstVector.at(0) = 1000;

    std::cout << vector2D.at(0).at(0) << " "
              << vector2D.at(0).at(1) << " "
              << vector2D.at(1).at(0) << " "
              << vector2D.at(1).at(1) << " "
              << '\n';

    print(firstVector);

    return 0;
}
