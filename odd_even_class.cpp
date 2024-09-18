#include <iostream>
#include <conio.h>
using namespace std;

class check{
    int a;

    public:
    void get_data();
    void put_data();

};

void check::get_data(){
    cout<<"enter number :";
    cin>>a;
}
void check::put_data(){
    if (a%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    
}

int main(){
    check obj_odd;
    obj_odd.get_data();
    obj_odd.put_data();
}