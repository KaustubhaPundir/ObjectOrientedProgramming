#include<iostream>
using namespace std;

class A{
    private:
        int x;
public:
    void input(){
        cout<<"Enter a number";
        cin>>x;
    }
};
class B:public A{
    int y;
public:
    void getdata(){
        cout<<"Enter y";
        cin>>y;
    }
    void putdata(){
        // cout<<"Addition ="<<x+y;
    }
};
int main(){
    A objA;
    B objB;
    // objA.x=10; // Protected
    // objB.y=20;
    // objA.input();
    objB.input();
    // objB.getdata();
    // objB.putdata();


}