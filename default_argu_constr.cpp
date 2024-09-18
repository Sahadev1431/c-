#include <iostream>
using namespace std;
class simple
{
    int data1 ,data2;
    public:
        simple(int a,int b = 8)
        {
            data1 = a;
            data2 = b;
        };
        void printdata()
        {
            cout<<"data 1 is "<<data1<<" and data 2 is "<<data2<<endl;
        }
};
int main()
{
    simple x(4,3);
    x.printdata();

    simple y(7);
    y.printdata();
    return 0;
}