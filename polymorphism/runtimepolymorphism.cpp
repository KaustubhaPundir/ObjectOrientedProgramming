#include<iostream>
using namespace std;

class Base{
    public:
    void display(){
        cout<<"Display Box\n";
    }
    void show(){
        cout<<"Show Base\n";
    }
};
class Derived: public Base{
    public:
    void display(){
        cout<<"Display Derived\n";
    }
    void show(){
        cout<<"Show derived\n";
    }
};
int main(){
    Base B, *bptr;
    Derived D;
    bptr = &B;
    bptr ->display();
    bptr ->show();
    bptr = &D;
    bptr ->display();
    bptr -> show();
    cout<<sizeof(B);
    return 0;
}
