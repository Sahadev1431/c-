#include <iostream>
using namespace std;
class y;
class x
{
    int data;
    public:
    friend void sum(x o1,y o2);
    friend void swap(x &o1,y &o2);
        void setdata(int p)
        {
            data = p;
        }

};
class y
{
    int num;
    public:
    friend void swap(x &o1,y &o2);
    friend void sum(x o1,y o2);

        void setdata(int q)
        {
            num = q;
        }

};
void sum(x o1,y o2)
{
    cout<<"the sum is "<<o1.data+o2.num<<endl;
}
void swap(x &o1,y &o2)
{
    int temp;
    temp = o1.data;
    o1.data = o2.num;
    o2.num = temp;

    cout<<"numbers exchanged num1 is "<<o1.data<<" num2 is "<<o2.num;
}
int main()
{
    x num1;
    num1.setdata(15);

    y num2;
    num2.setdata(80);

    sum(num1,num2);
    swap(num1,num2);
    
    return 0;
}