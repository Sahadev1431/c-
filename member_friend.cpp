#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
        int sumreal(complex ,complex );
        int sumimaginary(complex,complex);
};
class complex{
    int a,b;
    // friend int calculator::sumreal(complex o1,complex o2);
    // friend int calculator::sumimaginary(complex o1,complex o2);  
    //with this we can make function friend function
    // but if we want to make aall function driend function suppoose there are 100 func in class then
    friend class calculator; 
    public:
        void setdata(int n1,int n2){
            a = n1;
            b = n2;
        }
        void printdata(){
            cout<<"the complex number is "<<a<<" + "<<b<<" i "<<endl;
        }
};

int calculator::sumreal(complex o1,complex o2){
    return (o1.a+o2.a);
}
int calculator::sumimaginary(complex o1,complex o2){
    return(o1.b+o2.b);
}

int main(){
    complex s,j;
    s.setdata(5,5);
    s.printdata();
    j.setdata(3,8);
    j.printdata();

    calculator c;
    int res1 =c.sumreal(s,j);
    int res2 =c.sumimaginary(s,j);
    // c.printreal(s,j);
    cout<<"the sum of real part is "<<res1<<endl;
    cout<<"the sum of imaginary part is "<<res2<<endl;

    
    return 0;
}