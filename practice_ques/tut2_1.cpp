#include <iostream>
using namespace std;

class Fibonacci {
    int n;

public:
    Fibonacci(int num) : n(num) {}

    void generateSeries() {
        int a = 0, b = 1, next;
        cout << "Fibonacci Series: " << a << " " << b << " ";
        for (int i = 3; i <= n; i++) {
            next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
        cout << endl;
    }
};

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    if (num < 2) {
        cout << "Number of terms should be at least 2." << endl;
        return 1;
    }

    Fibonacci fib(num);
    fib.generateSeries();

    return 0;
}
