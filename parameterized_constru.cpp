#include <iostream>
using namespace std;
class complex
{
    int a,b;
public:
    complex(int ,int);
    void printdata();
};
complex::complex(int x,int y)
{
    a = x;
    b = y;
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

    return 0;
}