#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }

    virtual ~Base() {  // Virtual destructor
        cout << "Base class destructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }

    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Base* obj = new Derived();  // Create a Derived object using a Base class pointer
    delete obj;  // Delete the object

    return 0;
}
