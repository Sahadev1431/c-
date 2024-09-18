#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
        void setdata(int v1,int v2);
        void getdata();
        int sum_complex(complex o1,complex o2);
};
void complex::setdata(int v1,int v2)
{
    a = v1;
    b = v2;
}
void complex::getdata()
{
    cout<<"complex number is "<<a<<"+"<<b<<"i"<<endl;
}
int complex:: sum_complex(complex o1,complex o2)
{
    a = o1.a+o2.a;
    b = o1.b+o2.b;
}
int main()
{
    complex o1,o2,o3;
    o1.setdata(8,7);
    o1.getdata();

    o2.setdata(9,5);
    o2.getdata();

    o3.sum_complex(o1,o2);
    o3.getdata();
    return 0;
}