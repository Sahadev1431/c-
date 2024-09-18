#include<iostream>
using namespace std;
// int main(){
//     int a = 45;
//     cout<<"the value of a was "<<a<<endl;
//     a = 55;
//     cout<<"the va;ue of a is "<<a; //--->this will change the value of a
//     return 0;
// }

int main(){
    const int a = 45;
    cout<<"the value of a was "<<a<<endl;
    a = 55; //---->we cant do this bcz we have made variable a constant
    cout<<"the value of a is "<<a;
    return 0;
}