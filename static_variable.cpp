#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count; //this is static data member which is shared by all objects of class
    public:
        void setdata();
        void getdata();
};
void employee::setdata()
{
    cout<<"enter id :"<<endl;
    cin>>id;

}
void employee::getdata()
{
    cout<<"id is "<<id<<" and this is the employee number"<<count<<endl;
    count++;

}

int employee::count=1;  //default value of count will be 0;
int main()
{
    employee sahadev,jiya;
    sahadev.setdata();
    sahadev.getdata();
    jiya.setdata();
    jiya.getdata();
    return 0;
}