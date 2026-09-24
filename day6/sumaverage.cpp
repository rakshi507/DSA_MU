#include <iostream>

int main() {
    
    int numbers[] = {10, 20, 30, 40, 50};
    
    
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    
    double sum = 0;
    double average = 0;
    
    
    for(int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    
    
    average = sum / size;
    
    
    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Average = " << average << std::endl;
    
    return 0;
}
