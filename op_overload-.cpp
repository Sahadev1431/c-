#include<iostream>
using namespace std;
class demo{
    int a;
    public:
        void getdata(){
            cout<<"entr number:";
            cin>>a;
        }
        void disdata(){
            cout<<"value is "<<a<<endl;
        }

        demo operator-(demo ob2){
            demo ob3;
            ob3.a =a - ob2.a;
            return ob3;
        }
};
int main(){
    demo ob1,ob2,ob3;
    ob1.getdata();
    ob2.getdata();
    ob3 = ob1-ob2;
    ob3.disdata();

}