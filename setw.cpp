//*** Manipulaters in c++ ***
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a = 4,b = 33,c=1111;
    cout<<"the value of a without setw is "<<a<<endl;
    cout<<"the value of b without setw is "<<b<<endl;
    cout<<"the value of c without setw is "<<c<<endl;
    cout<<endl;
    
    cout<<"the value of a is "<<setw(4)<<a<<endl;  //-->this will create space of 4
    cout<<"the value of b is "<<setw(4)<<b<<endl;  //-->this will create space of 4
    cout<<"the value of c is "<<setw(4)<<c<<endl;
    return 0;
}