#include <iostream>
using namespace std;

int main(){
    int a,*b,**c;
    b = &a;
    c = &b;
    a = 143;

    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;
    cout<<"the address of a is "<<*c<<endl;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of a is "<<*b<<endl;
    cout<<"the value of a is "<<**c<<endl;
    return 0;
}