#include<iostream>
using namespace std;

class sess_1
{
    int python;
    public:
        sess_1()
        {
            cout<<"i got good marks in python"<<endl;
        }
        sess_1(int p)
        {
            // cout<<"enter marks in python:"<<endl;
            // cin>>p;
            python = p;
        }
};

class sess_2
{
    int oocp;
    public:
        sess_2()
        {
            cout<<"i got good marks in oocp"<<endl;
        }
        sess_2(int o)
        {
            // cout<<"enter marks in oocp:"<<endl;
            // cin>>o;
            oocp = o;
        }
};

class gu:public sess_1,public sess_2
{
    int total;
    public:
        gu(int a,int b):sess_1(a),sess_2(b)
        {
            total = a+b;
            cout<<"total marks are "<<total<<endl;
        }
};

int main()
{
    int a,b;
    cout<<"enter marks in python:";
    cin>>a;

    cout<<"enter marks in oocp:";
    cin>>b;

    gu g1(a,b);
    
    return 0;
}