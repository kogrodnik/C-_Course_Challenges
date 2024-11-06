#include <iostream> 
#include <fstream>
#include <iomanip>

constexpr int allColumnsWidth{20};
constexpr int studentColumn{15};
constexpr int scoreColumn{5};

void printMenuHeader() {
    std::cout << std::setw(studentColumn) << std::left << "Student"  
              << std::setw(scoreColumn) << std::right << "Score" << '\n';
    std::cout << std::setw(allColumnsWidth) << std::setfill('-') << "" << '\n';
    std::cout << std::setfill(' ');
}

void printMenuFooter(const double average) {
    std::cout << std::setw(allColumnsWidth) << std::setfill('-') << "" << '\n';
    std::cout << std::setfill(' ');
    std::cout << std::setw(studentColumn) << std::left << "Average score"  
              << std::setw(scoreColumn) << std::right << average << '\n';
}

int compareResult(const std::string &answerKey, const std::string &studentAnswer) {
    int score {0};
    for (int i {0}; i < studentAnswer.size(); i++) {
        if (answerKey.at(i) == studentAnswer.at(i)) {
            score++;
        }
    }
    return score;
}

void printStudentAndScore(const std::string &student, const int score) {
    std::cout << std::setw(studentColumn) << std::left << student
              << std::setw(scoreColumn) << std::right << score << '\n';
}

int main() {
    double average {0.0};
    int sum {0};
    int numberOfStudents {0};
    std::ifstream file {};
    std::string answerKey {};
    std::string studentName {};
    std::string studentAnswer {};
    int score {0};

    printMenuHeader();

    file.open("responses.txt");
    if (!file) {
        std::cerr << "Error opening file" << '\n';
        return 1;
    }

    file >> answerKey; 
    while (file >> studentName >> studentAnswer) {
        numberOfStudents++;
        score = compareResult(answerKey, studentAnswer);
        sum += score;
        printStudentAndScore(studentName, score);
    }

    average = static_cast<double>(sum)/ numberOfStudents;
    printMenuFooter(average);

    return 0;
}
