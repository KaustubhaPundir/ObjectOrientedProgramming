#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<<"Base Class\n";
    }
};
class B: public A{
    public:
     void display(){
        cout<< "Derived Class\n";
        // A::display();
     }
};
class C:public A,public B{
    public:
};
int main(){
    B obj;
    // obj.A::display();
    obj.display();
    C obj2;
    obj2.display();
    return 0;
}
/*
Suppose we have two classes having same function also having same prototype so in this case object of derived class is created and when calling that function of derived class is called and executed. So function of derived class has overridden function of base class.This method is called method overriding.

Now to access display of base class we have two ways one through derived class display function. Other way through 
*/