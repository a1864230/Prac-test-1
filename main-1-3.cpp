// main-1-3.cpp

#include <iostream>
#include "function-1-3.cpp" 

int main() {
    const int size = 2;
    double originalArray[size] = {1.1, 2.2};

    
    double* newArray = duplicateArray(originalArray, size);

    
    std::cout << "Duplicated array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    
    delete[] newArray;

    return 0;
}
