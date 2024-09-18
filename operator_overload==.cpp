#include <iostream>
using namespace std;

class xyz
{
    int a;
    public:
        void setdata()
        {
            cout<<"enter the value of a:";
            cin>>a;
        }
        void compare(xyz t2)
        {
            if(a==t2.a)
            {
                cout<<"values are same"<<endl;
            }
            else
            {
                cout<<"values are different."<<endl;
            }
        }
};

int main()
{
    xyz t1,t2;
    cout<<"for 1st object"<<endl;
    t1.setdata();
    cout<<"for 2nd object"<<endl;
    t2.setdata();
    t1.compare(t2);
    return 0;
}

