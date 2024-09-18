#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

class employee
{
    int id;
    double basicSalary,hra,da,oa,grossSalary;
    string name;
public:
    employee(int id,double basicSalary,const string& name):id(id),basicSalary(basicSalary),name(name){}
    void calGrossSal()
    {
        hra = basicSalary * 0.20;
        da = basicSalary * 0.30;
        oa = basicSalary * 0.10;
        grossSalary = basicSalary + hra + da + oa;
    }

    void display1Data()
    {
        cout<<left;
        cout<<setw(20)<<"ID"
            <<setw(20)<<"NAME"
            <<setw(20)<<"BASIC SALARY"
            <<setw(20)<<"HRA"
            <<setw(20)<<"DA"
            <<setw(20)<<"OA"
            <<setw(20)<<"GROSS SALARY"<<endl;
        cout<<"---------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    void displayData()
    {
        calGrossSal();
        cout<<left;
        cout<<setw(20)<<id
            <<setw(20)<<name
            <<setw(20)<<fixed<<setprecision(2)<<basicSalary
            <<setw(20)<<fixed<<setprecision(2)<<hra
            <<setw(20)<<fixed<<setprecision(2)<<da
            <<setw(20)<<fixed<<setprecision(2)<<oa
            <<setw(20)<<fixed<<setprecision(2)<<grossSalary<<endl;
    }
};

int main()
{
    int numem;
    cout<<"Enter number of employee:";
    cin>>numem;

    vector<employee>emp;
    for(int i = 0;i<numem;i++)
    {
        int id;
        double basicSalary;
        string name;

        cout<<"Enter details of employee "<<i+1<<endl;
        cout<<"Enter id :";
        cin>>id;
        cout<<"Enter name :";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter basic salary :";
        cin>>basicSalary;

        emp.emplace_back(id,basicSalary,name);
        cout<<endl<<endl;
    }

    auto it = emp.begin();
    it->display1Data();
    for(auto it = emp.begin();it!=emp.end();++it)
    {
        it->displayData();
    }
    return 0;
}