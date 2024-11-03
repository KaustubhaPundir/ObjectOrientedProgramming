#include <iostream>
#include <stdlib.h>
using namespace std;
class student
{
    char name;
    float salary;
    int age;

public:
    student(char name, float salary, int age)
    {
        this->name = name;
        this->salary = salary;
        this->age = age;
    }
    void display()
    {
        cout << name << "\n" << age << endl<< salary;
    }
};
void *operator new(size_t size)
{
    void *ptr;
    ptr = malloc(size);
    cout << "Operator New Overloaded\n";
    cout << "The size allocated is " << size << " Bytes." << endl;
    return ptr;
}
void operator delete(void *ptr)
{
    cout << "Delete op overloaded\n";
    cout << "Free Memory\n";
    free(ptr);
}
int main()
{
    student *p1;
    // p1 = new student(5, 6); // New op overloaded function
    // p1->display();
    int* pi;
    pi = new int();
    delete (p1); // delete op function called
    return 0;
}