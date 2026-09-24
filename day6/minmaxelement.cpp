#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {15, 3, 22, 91, 7, 44};
    int size = sizeof(arr) / sizeof(arr[0]); 

    
    int minVal = arr[0];
    int maxVal = arr[0];

    
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i]; 
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i]; 
        }
    }

    
    cout << "Minimum element: " << minVal << endl;
    cout << "Maximum element: " << maxVal << endl;

    return 0;
}
