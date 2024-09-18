#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age:"<<endl;
    cin>>age;

    if (age<18){
        cout<<"sorry you can't come to the party"<<endl;
    }
    else if (age==18){
        cout<<"you're 18.you can come to the party"<<endl;
    }
    else{
        cout<<"you are above 18.you can come to the party";
    }
    
    return 0;
}