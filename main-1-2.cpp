// main-1-2.cpp

#include <iostream>
#include "function-1-2.cpp" 

int main() {
    const int size = 4;
    double array[size] = {2.0, 7.0, 1.0, 3.0,};
    double value = 10.0;

    std::cout << "Original array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    modifyArray(array, size, value);

    std::cout << "Array after modification:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
