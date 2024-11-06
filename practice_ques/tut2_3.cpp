#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of integers: ";
    cin >> n;

    int* arr = new int[n];  // Dynamically allocate memory for n integers

    cout << "Enter the integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    cout << "The smallest number is " << arr[minIndex] 
         << " at position " << minIndex + 1 << "." << endl;

    delete[] arr;  // Free the allocated memory

    return 0;
}
