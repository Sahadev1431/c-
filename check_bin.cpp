#include<iostream>
#include <string>
using namespace std;
class binary
{
    string s;
    public:
        void read();
        void chk_bin();
        void one_complement();
        void display();
};
void binary:: read()
{
    cout<<"enter a number:"<<endl;
    cin>>s;
}
void binary:: chk_bin()
{
    for(int i = 0;i<s.length();i++)
    {
        if(s.at(i)!='0'&& s.at(i)!='1')
        {
            cout<<"incorrect binary format";
            exit(0);
        }
        
    }
}
void binary::display()
{
    for(int i = 0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}
void binary::one_complement()
{
    for (int i = 0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    cout<<endl;
    b.one_complement();
    b.display();

    return 0;
}