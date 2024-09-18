#include<iostream>
#include <fstream>
using namespace std;

class student
{
    int rollno,age;
public:
    student(){}
    student(int roll,int age):rollno(roll),age(age){}
};

int main()
{
    // ofstream file("stu_data.txt",ios::binary);
    // student s1(101,22);
    // file.write((char*)&s1,sizeof(s1));
    // file.close();


    student p;
    ifstream file("stu_data.txt",ios::binary);
    file.read((char*)&p,sizeof(p));
    // int p =2048;
    // ofstream file("learn.txt",ios::binary);
    // file.write((char *)&p,sizeof(p));
    // file.close();


    // int x;
    // ifstream file("learn.txt",ios::binary);
    // file.read((char *)&x,sizeof(x));
    // cout<<x;
    // return 0;
}