
#include <iostream>
using namespace std;

int main() {
    
    int numbers[] = {4, 7, 2, 4, 9, 4, 1};
    
    
    int total_elements = sizeof(numbers) / sizeof(numbers[0]);
    
    
    int target = 4;
    
    
    int count = 0;
    
    
    for (int i = 0; i < total_elements; i++) {
        if (numbers[i] == target) {
            count++; 
        }
    }
    
    cout << "The number " << target << " appears " << count << " times." << endl;
    
    return 0;
}
