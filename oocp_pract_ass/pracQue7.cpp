#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Student
{
protected:
    int rollno;
    string name;
    string stream;

public:
    Student() {}
    void setdata()
    {
        cout << "Enter roll no :";
        cin >> rollno;
        cout << "Enter name :";
        getline(cin >> ws, name);
        cout << "Enter stream :";
        getline(cin >> ws, stream);
    }
    void displayData()
    {
        cout << "Roll no :" << rollno << endl;
        cout << "Name :" << name << endl;
        cout << "Stream :" << stream << endl;
    }
};

class Subject : public Student
{
protected:
    int marks[5];

public:
    Subject() {}
    void subSetdata()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks in subject " << i + 1 << ":";
            cin >> marks[i];
        }
    }
    void displaySubject()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks in subject " << i + 1 << ":" << marks[i] << endl;
        }
    }
};

class Result : public Subject
{
protected:
    float total, percent;

public:
    Result() {}
    void calTotal()
    {
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }
        percent = (total * 100) / 500;
    }
    void resultData()
    {
        cout << "Total marks :" << total << endl;
        cout << "Percentage :" << percent << endl;
    }
};

int main()
{
    int numstu;
    cout << "Enter number of student :";
    cin >> numstu;

    vector<Result *> res;
    ofstream outfile;
    outfile.open("tempfile.txt", ios::out | ios::binary);
    for (int i = 0; i < numstu; i++)
    {
        Result *r1 = new Result;
        r1->setdata();
        r1->subSetdata();
        r1->calTotal();

        res.emplace_back(r1);
        outfile.write((char *)r1, sizeof(Result));
        outfile.close();
    }

    ifstream infile;
    Result r2;
    infile.open("tempfile.txt", ios::in | ios::binary);
    for (int i = 0; i < numstu; i++)
    {
        cout << "Displaying details for studenet " << i + 1 << endl;
        if(infile.read((char*)&r2,sizeof(Result)))
        {
        r2.displayData();
        r2.displaySubject();
        r2.resultData();
        // for(auto it = res.begin();it!=res.end();it++)
        // {
        //     it->displayData();
        //     it->displaySubject();
        //     it->resultData();
        // res[i].displayData();
        // res[i].displaySubject();
        // res[i].resultData();
        }
    }
}