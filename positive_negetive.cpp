#include <iostream>
using namespace std;

class check{
    int n;

    public:
    void get_data();
    void put_data();
};

void check::get_data(){
    cout<<"enter a number:";
    cin>>n;
}
void check::put_data(){
    if (n>0){
        cout<<"the number is positive";
    }
    else if(n==0){
        cout<<"the number is zero";
    }
    else{
        cout<<"the number is negetive";
    }
}

int main(){
    check obj_positive;
    obj_positive.get_data();
    obj_positive.put_data();
}