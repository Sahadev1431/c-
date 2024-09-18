#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x,int y)
    {
        a = x;
        b = y;
    }
    complex(int x){
        a = x;
        b = 0;  //-->default value is zero
    }
    complex(){
        a = 0;
        b = 0;  //-->both default value is zero
    } 

    void printdata()
    {
        cout << "the complex number is " << a << " + " << b << " i " << endl;
    }
};

int main()
{
    complex s(10,5);
    s.printdata();

    complex j(4);
    j.printdata();

    complex z;
    z.printdata();

}