#include <iostream>
using namespace std;

class Person {
    string name;

public:
    Person(string n) : name(n) {}

    void introduce() {
        cout << "Hi, my name is " << name << "." << endl;
    }
};

class Greeting {
public:
    void greet(Person &p) {
        p.introduce();  // Message passing
    }
};

int main() {
    Person john("John");
    Greeting greet;
    greet.greet(john);  // Passes the message to the Person object

    return 0;
}
