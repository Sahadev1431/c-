#include <iostream>
using namespace std;

class check{
    int a,b;

    public:
    void get_data();
    void put_data();
};

void check::get_data(){
    cout<<"enter number 1:";
    cin>> a;
    cout<<"enter number 2:";
    cin>> b;
}
void check::put_data(){
    if (a>b){
        cout<<a<<" is greater"<<endl;
    }
    else{
        cout<<b<<" is greater"<<endl;
    }
}

int main(){
    check obj_max;
    obj_max.get_data();
    obj_max.put_data();
}