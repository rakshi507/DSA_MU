#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,40,60,70,80};
    int n = 7;
    int target = 40;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = low + (low + high) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index " << mid;
            found = true;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found)
        cout << "Element not found";

    return 0;
}













