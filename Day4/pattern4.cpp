#include <iostream>
using namespace std;

int main() {
    int n = 10;

    for (int i = 1; i <= n; i++) {

        // Left triangle
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Space between triangles
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right triangle
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}