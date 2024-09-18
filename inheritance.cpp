#include <iostream>
using namespace std;

class base
{
    int data1;
    public:
        int data2=20;
        int setdata();
        void getdata();
};

int base:: setdata()
{   
    data1 = 10;
    return data1;
}

void base::getdata()
{
    cout<<"the value of data1 is "<<data1<<endl;
    cout<<"the value of data2 is "<<data2<<endl;
}

class derived:private base
{
    int data3;
    public:
        void process()
        {
            setdata();
            data3 = data2*setdata();
        }
        void display();
};
void derived::display()
{
    getdata();
    cout<<"the value of data3 is "<<data3;
}

int main()
{
    derived d1;
    // d1.setdata();
    d1.process();
    // d1.getdata();
    d1.display();
    return 0;
}