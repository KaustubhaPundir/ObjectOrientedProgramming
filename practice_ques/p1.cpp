// 
#include <iostream>
using namespace std;
class Binary
{
    int x, y,z;

public:
    Binary()
    {
    }
    Binary(int c, int d, int e)
    {
        this->x = c;
        this->y = d;
        this->z = e;
       
    }
    void putvalue()
    {
        cout << x << "," << y << ","<< z << "\n";
    }
    // Binary operator + (Binary c)
    // {
    //     Binary temp;
    //     temp.x = x+ c.a;
    //     temp.y = y + c.b;
    //     temp.z = d + c.d
    //     return temp;
    // }
    friend Binary operator+(Binary c1, Binary c2);
};

Binary operator +(Binary c1, Binary c2)
{
    // complex temp;
    // temp.a = c1.a + c2.a;
    // temp.b = c1.b + c2.b;
    return Binary((c1.x + c2.x), (c1.y + c2.y),(c1.z + c2.z));
}
int main()
{
    Binary c1, c2, c3;
    c1 = Binary(1,2,3);
    c2 = Binary(10,20,30);
    c3 = c1 + c2;
    c3.putvalue();

    return 0;
}
