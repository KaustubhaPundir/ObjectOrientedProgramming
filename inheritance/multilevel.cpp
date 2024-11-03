#include<iostream>
using namespace std;

class alpha{
    int x;
public:
    alpha(){

    }
    alpha(int i){
        x=i;
        cout<<"Alpha initialized"<<endl;
    }
    void show_x(){
        cout<<"x: "<<x<<endl;
    }
};

class beta:virtual public alpha{
    float y;
public:
    beta(){

    }
    beta(float i){
        y=i;
        cout<<"Beta initialized"<<endl;
    }
    void show_y(){
        cout<<"y: "<<y<<endl;
    }
};

class gamma: virtual public beta{
    int m,n;
public:
    gamma(int a,float b, int c,int d):
            alpha(a),
            beta(b){
            m=c;
            n=d;
            cout<<"Gamma initialized"<<endl;
        }
    void show_mn(){
        cout<<"m: "<<m<<" n: "<<n<<endl;
    }
};
int main(){
    gamma G(2,1.5f,4,6);
    G.show_x();
    G.show_y();
    G.show_mn();
    return 0;
}