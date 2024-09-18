#include <iostream>
using namespace std;
class complex
{
    int a,b;
public:
    complex(int ,int);
    complex(int x);
    complex();
    void printdata();
};
complex::complex(int x,int y)
{
    a = x;
    b = y;
}
complex::complex(int x)
{
    a = x;
    b = 43;
}
complex::complex()
{
    a = 56;
    b = 68;
}
void complex::printdata()
{
    cout<<"complex number is "<<a<<" + "<<b<<"i"<<endl;
}

int main()
{
    complex z(4,5);   //implicit call
    z.printdata();

    complex v = complex(5,6);  // explicit call
    v.printdata();

    complex s(1);
    s.printdata(); 

    complex e;
    e.printdata();

    return 0;
}