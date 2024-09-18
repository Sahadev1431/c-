#include <iostream>
using namespace std;
class complex
{
    int a,b;
public:
    complex();
    void printdata();
};
complex::complex()
{
    a = 4;
    b = 5;
}
void complex::printdata()
{
    cout<<"complex number is "<<a<<" + "<<b<<"i";
}

int main()
{
    complex x;
    x.printdata();

    return 0;
}