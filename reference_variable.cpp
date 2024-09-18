#include<iostream>
using namespace std;
int main(){
    int s = 143;
    int &j = s;
    cout<<"the value of s is"<<s<<endl;
    cout<<"the value of j is"<<j<<endl;

    return 0;
}