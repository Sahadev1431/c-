#include <iostream>
using namespace std;

int sum(int a,int b);
void g();//-->you can either write void g(void);
int main(){
    int num1, num2;
    cout<<"enter number 1:"<<endl;
    cin>>num1;
    cout<<"enter number 2:"<<endl;
    cin>>num2;

    cout<<"the sum of "<<num1<<" and "<<num2<<" is "<<sum(num1,num2)<<endl;
    g();

    return 0;
}
int sum(int a,int b){
    int c = a+b;
    return c;
}
void g(){
    cout<<"hello good morning"<<endl;
}