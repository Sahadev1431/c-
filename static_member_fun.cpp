#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count; //this is static data member which is shared by all objects of class
    public:
        void setdata();
        void getdata();
        static void getcount();  //this is stataic member function
};
void employee::setdata()
{
    cout<<"enter id :"<<endl;
    cin>>id;

}
void employee::getdata()
{
    count++;
    cout<<"id is "<<id<<" and this is the employee number"<<count<<endl;
}
void employee::getcount()
{
    // cout<<id;  this will throw an error bcz static memb func can access statis data member only;
    cout<<"this is count no:"<<count<<endl;
}
int employee::count;  //default value of count will be 0;
int main()
{
    employee sahadev,jiya;
    sahadev.setdata();
    sahadev.getdata();
    // sahadev.getcount();  //in both way we can call get count(); 
    employee::getcount();  //this way also we can call get count();
    jiya.setdata();
    jiya.getdata();
    // jiya.getcount();  //in both way we can call get count(); 
    employee::getcount();  //this way also we can call get count();
    return 0;
}