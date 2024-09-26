#include <iostream>

void print(const int *array, size_t arraySize) {
    std::cout << "[ ";
    for(size_t i {0}; i < arraySize; i++) {
        std::cout << *(array + i) << " ";
    }
    std::cout << "]" << '\n';
}

int *applyAll(const int *arrayOne, size_t sizeOfArrayOne, const int *arrayTwo, size_t sizeOfArrayTwo) {
    int *newArray = new int[sizeOfArrayOne * sizeOfArrayTwo];
    int counter {0};
    for(size_t i {0}; i < sizeOfArrayTwo; i++) {
        for(size_t j {0}; j < sizeOfArrayOne; j++) {
            newArray[counter] = *(arrayOne + j) * *(arrayTwo + i);
            counter++;
        }
    }
    return newArray;
}

int main() {
    const size_t sizeOfArrayOne {5};
    const size_t sizeOfArrayTwo {3};

    int arrayOne[] {1, 2, 3, 4, 5};
    int arrayTwo[] {10, 20, 30};

    std::cout << "Array 1: "; 
    print(arrayOne, sizeOfArrayOne);

    std::cout << "Array 2: ";
    print(arrayTwo, sizeOfArrayTwo);

    int *result = applyAll(arrayOne, sizeOfArrayOne, arrayTwo, sizeOfArrayTwo); 
    constexpr size_t resultSize {sizeOfArrayOne * sizeOfArrayTwo};

    std::cout << "Result: ";
    print(result, resultSize);
    delete[] result;
    std::cout << '\n';

    return 0;

}