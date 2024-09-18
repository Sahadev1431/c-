/*
Q1. Write a program to create class Student with student’s rollno, name and marks of three subjects (OOCP, AI and MF) and display the details of student
    with total marks of all subjects along with the percentage in proper format.(Output should be in descending order of percentage.
*/
//===================================================================================================================================================================================

#include <iostream>
#include <string>
using namespace std;


class student{
    int rollno;
    string name;
    double oocp_marks;
    double ai_marks;
    double mf_marks;

    public:
        void input();
        double total();
        double percentage();
        void display(); 
};

    void student:: input(){
        cout<<"enter roll no:";
        cin>>rollno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter oocp marks:";
        cin>>oocp_marks;
        cout<<"enter ai marks:";
        cin>>ai_marks;
        cout<<"enter mf marks:";
        cin>>mf_marks;
    }
    double student:: total(){
        return (oocp_marks+ai_marks+mf_marks);
    }
    double student:: percentage(){
        return (total()*100)/300;
    }
    void student:: display(){
        cout<<"roll no "<<rollno<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"total marks are "<<total()<<endl;
        cout<<"percentage is "<<percentage()<<endl;
    } 



int main(){
    int n;
    cout<<"how many record do u want to create: ";
    cin>>n;
    student stu[n];

    for (int i = 0; i < n; i++)
    {
        stu[i].input();
    }


    for (int i = 0; i < n; i++)
    {
        stu[i].display();
        cout<<endl<<endl;

    }
    
    return 0;
}