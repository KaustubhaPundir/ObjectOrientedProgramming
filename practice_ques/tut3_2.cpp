#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    double dimension1;
    double dimension2;

public:
    // Function to get data
    void get_data(double d1, double d2) {
        dimension1 = d1;
        dimension2 = d2;
    }

    // Virtual function to display area
    virtual void display_area() = 0;  // Pure virtual function making Shape an abstract class
};

// Derived class for Triangle
class Triangle : public Shape {
public:
    void display_area() override {
        double area = 0.5 * dimension1 * dimension2;
        cout << "Area of the triangle: " << area << endl;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
    void display_area() override {
        double area = dimension1 * dimension2;
        cout << "Area of the rectangle: " << area << endl;
    }
};

int main() {
    Triangle t;
    Rectangle r;

    // Input dimensions for Triangle
    t.get_data(5.0, 8.0);
    t.display_area();

    // Input dimensions for Rectangle
    r.get_data(6.0, 7.0);
    r.display_area();

    return 0;
}
