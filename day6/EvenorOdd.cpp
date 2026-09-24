#include <iostream>
using namespace std;

int main() {
    
    int numbers[] = {5, 12, 7, 24, 33, 8, 11};
    
    
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    int evenCount = 0;
    int oddCount = 0;
    
    
    for (int i = 0; i < size; i++) {
        
        if (numbers[i] % 2 == 0) {
            evenCount++; 
        } 
        
        else {
            oddCount++; 
        }
    }
    
    
    cout << "Total even numbers: " << evenCount << endl;
    cout << "Total odd numbers: " << oddCount << endl;
    
    return 0;
}
