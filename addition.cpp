#include <iostream>
using namespace std;

class addition{
    private:
    int a ,b;

    public:
    void get_data(){
        cout<<"enter number 1 :";
        cin>>a;
        cout<<"enter number 2:";
        cin>>b;
    }
    void put_data(){
        cout<<"addition is "<<a+b<<endl;
    }

};

int main(){
    addition aa;
    aa.get_data();
    aa.put_data();

    return 0;
}