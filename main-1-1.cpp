// main-1-1.cpp

#include <iostream>

double arrayMin(double*, int); 

int main() {
    const int size = 3; 
    double myArray[size] = {6.1, 3.5, 9.2};
    
    double min = arrayMin(myArray, size);
    
    std::cout << "The minimum value in the array is: " << min << std::endl;

    return 0;
}
