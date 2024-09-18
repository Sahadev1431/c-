# include<iostream>
using namespace std;
class employee{
    int id;
    int salary;

    public:
        void setdata(){
            cout<<"enter id "<<endl;
            cin>>id;
        }
        void getdata(){
            cout<<"employee id is "<<id<<endl;
        }
};
int main(){
    employee sd[4];
    for (int i = 0; i < 4; i++)
    {
        sd[i].setdata();
    }

    for (int i = 0; i < 4; i++)
    {
        sd[i].getdata();
    }
        

    return 0;
}