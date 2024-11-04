#include <iostream>
using namespace std;

class DynamicArray {
    int *arr;
    int size;

public:
    // Dynamic constructor
    DynamicArray(int s) {
        size = s;
        arr = new int[size];  // Allocate memory dynamically
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;  // Initialize the array
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor to free the allocated memory
    ~DynamicArray() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    DynamicArray da(n);  // Create an object with dynamic constructor
    da.display();

    return 0;
}
