#include <iostream>

int main() {
    
    int numbers[] = {12, -5, 0, 8, -21, 45, -3, 7};
    
    
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    std::cout << "Positive numbers in the array are: " << std::endl;
    
    
    for (int i = 0; i < size; i++) {
        if (numbers[i] > 0) {
            std::cout << numbers[i] << " ";
        }
    }
    
    std::cout << std::endl;
    return 0;
}
