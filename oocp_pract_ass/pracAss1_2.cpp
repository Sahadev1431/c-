#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Num
{
    int n1,n2,n3,n4,total;
    float avg;
public:
    Num(int n1,int n2,int n3,int n4):n1(n1),n2(n2),n3(n3),n4(n4){}
    void totalAndAvg()
    {
        total = n1+n2+n3+n4;
        avg = total/4;
    }
    void display_data()
    {
        totalAndAvg();
        cout<<left;
        cout<<setw(10)<<"Total"
            <<setw(10)<<"Average"<<endl;
        cout<<setw(10)<<total
            <<setw(10)<<fixed<<setprecision(2)<<avg;
    }

};

int main()
{
    int n1,n2,n3,n4;
    cout<<"Enter number 1:";
    cin>>n1;
    cout<<"Enter number 2:";
    cin>>n2;
    cout<<"Enter number 3:";
    cin>>n3;
    cout<<"Enter number 4:";
    cin>>n4;

    Num x1(n1,n2,n3,n4);
    x1.display_data();

    return 0;
}