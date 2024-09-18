#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

class Student
{
    int rollno,age,oocp,ai,mf;
    string name;
public:
    Student(){}
    Student(int rollno,const string& name,int age):rollno(rollno),name(name),age(age),oocp(40),ai(40),mf(40){}
    int getoocp()
    {
        return oocp;
    }
    void displayStudent()
    {
        cout<<left;
        cout<<setw(10)<<rollno
            <<setw(10)<<name
            <<setw(10)<<age
            <<setw(10)<<oocp
            <<setw(10)<<ai
            <<setw(10)<<mf<<endl;
    }
    void modifyMarks(int roll,int n_oocp,int n_ai,int n_mf)
    {
        if (roll == rollno)
        {
            oocp = n_oocp;
            ai = n_ai;
            mf = n_mf;
        }
    }
    static bool sortAsc(Student &a,Student &b)
    {
        return a.getoocp() < b.getoocp();
    }
};


int main()
{
    int numstu;
    cout<<"Enter num of student :";
    cin>>numstu;

    vector<Student>stu;

    for(int i = 0;i<numstu;++i)
    {
        int rollno,age;
        string name;
        cout<<"Enter details for student "<<i+1<<" :"<<endl;
        cout<<"Enter roll :";
        cin>>rollno;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age :";
        cin>>age;

        stu.emplace_back(rollno,name,age);
        cout<<endl<<endl;
    }
 
    cout<<left;
    cout<<setw(10)<<"ROLL NO"
        <<setw(10)<<"NAME"
        <<setw(10)<<"AGE"
        <<setw(10)<<"OOCP"
        <<setw(10)<<"AI"
        <<setw(10)<<"MF"<<endl;

    

    for(auto it = stu.begin();it!= stu.end();++it)
    {
        it->displayStudent();
    }

     int roll,n_oocp,n_ai,n_mf;
    cout<<"Enter roll no to change marks :";
    cin>>roll;
    cout<<"Enter new oocp marks:";
    cin>>n_oocp;
    cout<<"Enter new ai marks:";
    cin>>n_ai;
    cout<<"Enter new mf marks:";
    cin>>n_mf;
    
    
  

    
    for(auto it = stu.begin();it!= stu.end();++it)
    {
        it->modifyMarks(roll,n_oocp,n_ai,n_mf);
    }

    cout<<setw(10)<<"ROLL NO"
        <<setw(10)<<"NAME"
        <<setw(10)<<"AGE"
        <<setw(10)<<"OOCP"
        <<setw(10)<<"AI"
        <<setw(10)<<"MF"<<endl;

    for(auto it = stu.begin();it!= stu.end();++it)
    {
        it->displayStudent();
    }
   
    return 0;
}