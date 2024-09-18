#include <iostream>
#include <string>
using namespace std;

class xyz
{
    int a;
    public:
        void setdata()
        {
            cout<<"enter a number:";
            cin>>a;
        }
        void show()
        {
            cout<<"the number is "<<a;
        }

        xyz sum(xyz t2)
        { 
            xyz t3;
            t3.a = a-t2.a;
            return t3;              
        }
};

int main()
{
    xyz t1,t2,t3;
    cout<<"for obj 1"<<endl;
    t1.setdata();
    cout<<"for obj 2"<<endl;
    t2.setdata();
    t3 = t1.sum(t2);
    t3.show();
    return 0;
}