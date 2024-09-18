#include <iostream>
using namespace std;
class demo{
    int a;

    public:
        demo(){
            a = 10;
        }
        demo(demo &z){
            a = z.a;
        }
        void getdata(){
            cout<<"the value of a is "<<a<<endl;
        }
};
int main(){
    demo ob1;
    demo ob2(ob1);
    ob1.getdata();
    ob2.getdata();

    

}