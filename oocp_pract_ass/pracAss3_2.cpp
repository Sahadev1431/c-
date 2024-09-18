#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class student
{
protected:
    int rollno;
    string name,stream;
public:
    void setdata()
    {
        cout<<"Enter Roll no :";
        cin>>rollno;
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter stream :";
        cin>>stream;
    }
    void displayStudent()
    {
        cout<<left;
        cout<<setw(20)<<"Roll no"<<":"<<rollno<<endl;
        cout<<setw(20)<<"Name"<<":"<<name<<endl;
        cout<<setw(20)<<"Stream"<<":"<<stream<<endl;
    }
};

class subject:public student
{
protected:
    int marks[5];
public:
    void subSetdata()
    {
        // setdata();
        for(int i = 0;i<5;i++)
        {
            cout<<"Enter marks in subject "<<i+1<<":";
            cin>>marks[i];
        }
    }
    void displaySubject()
    {
        // displayStudent();
        for(int i = 0;i < 5;i++)
        {
            cout<<setw(20)<<"Marks in subject "<<i+1<<":"<<marks[i]<<endl;
        }
    }
};

class result:public subject
{
    float total,percentage;
public:
    void calTotal()
    {
        total = 0;
        for (int i = 0;i<5;i++)
        {
            total += marks[i];
        }
        percentage = (total * 100)/500;
    }
    void displayResult()
    {
        cout<<setw(20)<<"Total marks"<<":"<<total<<endl;
        cout<<setw(20)<<"Percentage"<<":"<<percentage<<endl;
        if(percentage>=40)
        {
            cout<<"Student has passed"<<endl<<endl;
        }
        else
        {
            cout<<"Student has failed"<<endl<<endl;
        }
    }
};

int main()
{
    int numstu;
    cout<<"For how many student you want to insert data :";
    cin>>numstu;

    vector<result>stuvector;
    
    for (int i = 0;i<numstu;i++)
    {
        cout<<"Enter data for student "<<i+1<<endl;
        result r1;
        r1.setdata();
        r1.subSetdata();
        r1.calTotal();
        // stuvector[i].setdata();
        // stuvector[i].subSetdata();
        // stuvector[i].calTotal();
        stuvector.emplace_back(r1);
    }

    for(int i = 0;i<numstu;i++)
    {
        cout<<"displaying result of student "<<i+1<<endl;
        // stuvector[i].displayStudent();
        // stuvector[i].displaySubject();
        // stuvector[i].displayResult();
        for(auto it = stuvector.begin();it!= stuvector.end();it++)
        {
            it->displayStudent();
            it->displaySubject();
            it->displayResult();
        }
    }
    // result r1[numstu];

    // for(int i = 0;i<numstu;i++)
    // {
    //     cout<<"Enter details for student "<<i+1<<endl;
    //     r1[i].setdata();
    //     r1[i].subSetdata();
    //     r1[i].calTotal();
    // } 

    // for(int i = 0;i < numstu ;i++)
    // {
    //     cout<<"Displaying details of student "<<i+1<<endl;
    //     r1[i].displayStudent();
    //     r1[i].displaySubject();
    //     r1[i].displayResult();
    //     cout<<endl;
    // }
    return 0;
}