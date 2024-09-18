/* virtual function are used to call method of derived class.
here we made pointer of class sahadev and assigened address of class jiya.and both class have same method name display()
so without virtual pointer will call display() method of class sahadev bcz it is a pointer of class sahadev
but if we made virtual function display then it will go for display() function of class jiya
*/


#include <iostream>
using namespace std;

class sahadev
{
    public:
    int s;
    void virtual display()
    {
        cout<<"S.. baby love mumma "<<s<<endl;
    }
};

class jiya:public sahadev
{
    public:
    int j;
    void display()
    {
        cout<<"J.. mumma love baby "<<j<<endl;
        cout<<"baby also love mumma"<<s<<endl;
    }
};

int main()
{
    sahadev* ptr;
    jiya j1;

    ptr = &j1;
    ptr->s = 14;

    ptr->display();
    return 0;
}