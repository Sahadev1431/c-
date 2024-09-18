#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    friend complex sum_complex(complex o1,complex o2);
        void setdata(int n1,int n2);
        void printdata();
};
void complex::setdata(int n1,int n2)
{
    a = n1;
    b = n2;
}
void complex::printdata()
{
    cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
}
complex sum_complex(complex o1,complex o2) //this is friend function .this has special permission to access private members of class.
{
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex o1,o2,sum;
    o1.setdata(4,5);
    o1.printdata();

    o2.setdata(8,9);
    o2.printdata();

    sum = sum_complex(o1,o2);
    sum.printdata();
    return 0;
}