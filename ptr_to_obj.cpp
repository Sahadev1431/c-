#include <iostream>
using namespace std;

class complex
{
    int real,imaginary;
    public:
        void setdata(int a,int b)
        {
            real = a;
            imaginary = b;
        }
        void getdata()
        {
            cout<<"the real part is "<<real<<endl;
            cout<<"the imaginary part is "<<imaginary<<endl;
        }
};

int main()
{
    complex c1;
    complex *ptr = &c1;
    c1.setdata(4,5);
    c1.getdata();
cout<<endl;
    (*ptr).setdata(5,6);
    (*ptr).getdata();
cout<<endl;
    ptr->setdata(6,7);
    ptr->getdata();
    return 0;
}