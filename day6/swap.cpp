#include <iostream>
#include <utility> 

using namespace std;


void customSwap(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Original Array: ";
    printArray(numbers, size);

    
    cout << "\nSwapping first and last elements using customSwap..." << endl;
    customSwap(numbers[0], numbers[size - 1]);
    
    cout << "Array after Custom Swap: ";
    printArray(numbers, size);

    
    cout << "\nSwapping index 1 and index 2 using std::swap..." << endl;
    std::swap(numbers[1], numbers[2]);

    cout << "Array after std::swap: ";
    printArray(numbers, size);

    return 0;
}
