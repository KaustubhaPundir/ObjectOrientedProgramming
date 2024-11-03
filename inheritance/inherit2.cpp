#include<iostream>
using namespace std;

class A{
    protected:
    int a;
public:
    void input(){
        cout<<"Enter a num: ";
        cin>>a;
    }
    void puta(){
        cout<<a;
    }
};
class B{
    protected:
    int b;

public:
    void getdata(){
        cout<<"Enter a num: ";
        cin>>b;
    }
    void putb(){
        cout<<b;
    }
};
class C : public A, public B
{
    public:
        void addition(){
            cout<< "Addition = "<<a+b;
        }
};
int main(){
    C obj;
    obj.input();
    obj.puta();
    obj.putb();
    return 0;
}