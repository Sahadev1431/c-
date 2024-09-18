#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int s = 100;
    int j = 43;
    cout<<"the value of s before function was "<<s<<" and value of j before function was "<<j<<endl;
    swap(&s,&j);//--> I can write either swap(s,j);
    cout<<"the value of s after function is "<<s<<" and value of j after function is "<<j<<endl;

    return 0;
}