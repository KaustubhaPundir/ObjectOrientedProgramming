#include <iostream>
using namespace std;

class Base
{
public:
    int b;
    void show()
    {
        cout << "b: " << b << endl;
    }
};
class Derived : public Base
{
public:
    int d;
    void show()
    {
        cout << "b: " << b << endl;
        cout << "d: " << d << endl;
    }
};
int main()
{
    Base *bptr;
    Base objB;
    bptr = &objB;
    bptr->b = 100;
    bptr->show();
    Derived objD;
    bptr = &objD;
    bptr->b = 200;
    (Derived *)bptr->d = 300;
    bptr->show();
    Derived *dptr;
    dptr = &objD;
    dptr->d = 300;
    dptr->show();
}