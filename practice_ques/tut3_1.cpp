#include <iostream>
#include <cstring>

class X {
public:
    char str1[50];
    X(const char* s1) {
        strcpy(str1, s1);
    }
    void displayX() const {
        std::cout << "String in X: " << str1 << std::endl;
    }
};

class Y {
public:
    char str2[50];
    Y(const char* s2) {
        strcpy(str2, s2);
    }
    void displayY() const {
        std::cout << "String in Y: " << str2 << std::endl;
    }
};

class Z : public X, public Y {
public:
    char str3[100];
    Z(const char* s1, const char* s2) : X(s1), Y(s2) {
        strcpy(str3, str1);
        strcat(str3, str2);
    }
    void displayZ() const {
        std::cout << "Concatenated String in Z: " << str3 << std::endl;
    }
};

int main() {
    Z obj("Hello ", "World!");
    obj.displayX();
    obj.displayY();
    obj.displayZ();

    return 0;
}
