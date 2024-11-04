#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    // Inline constructor
    Point(int a, int b) : x(a), y(b) {}

    void display() const {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(5, 10);  // Create an object with the inline constructor
    p.display();

    return 0;
}
