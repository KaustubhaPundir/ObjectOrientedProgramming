#include <iostream>
#include <cstring>  // For strcmp

class String {
    char *str;

public:
    // Constructor
    String(const char *s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy Constructor
    String(const String &source) {
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Overload = operator
    String& operator=(const String &source) {
        if (this == &source)  // Self-assignment check
            return *this;

        delete[] str;  // Clean up old data
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);

        return *this;
    }

    // Overload == operator
    bool operator==(const String &other) const {
        return strcmp(str, other.str) == 0;
    }

    // Display function
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    String str1("Hello");
    String str2("Hello");
    String str3("World");

    if (str1 == str2)
        std::cout << "str1 and str2 are equal." << std::endl;
    else
        std::cout << "str1 and str2 are not equal." << std::endl;

    if (str1 == str3)
        std::cout << "str1 and str3 are equal." << std::endl;
    else
        std::cout << "str1 and str3 are not equal." << std::endl;

    return 0;
}
