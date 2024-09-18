#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

class Student
{
    int roll, total, oocp, ai, mf;
    float percent;

public:
    Student(int roll, int oocp, int ai, int mf) : roll(roll), oocp(oocp), ai(ai), mf(mf) {}
    void percentage()
    {
        total = oocp + ai + mf;
        percent = (total * 100) / 300;
    }
    float getper()
    {
        percentage();
        return percent;
    }
    void display1data()
    {
        cout << left;
        cout << setw(20) << "Roll"
             << setw(20) << "Total Marks"
             << setw(20) << "oocp"
             << setw(20) << "ai"
             << setw(20) << "mf"
             << setw(20) << "Percentage" << endl;
    }

    void displayData()
    {
        percentage();
        cout << left;
        cout << setw(20) << roll
             << setw(20) << total
             << setw(20) << oocp
             << setw(20) << ai
             << setw(20) << mf
             << setw(20) << fixed << setprecision(2) << percent << endl;
    }

    static bool sort_dec(Student &a,Student &b)
    {
        return a.getper() > b.getper();
    }
};

int main()
{
    int numstu;
    cout << "Enter number of students :";
    cin >> numstu;
    vector<Student> stu;
    for (int i = 0; i < numstu; i++)
    {
        int roll, oocp, ai, mf;
        cout << "Enter details of Student " << i + 1 << endl;
        cout << "Enter roll no:";
        cin >> roll;
        cout << "Enter marks in OOCP :";
        cin >> oocp;
        cout << "Enter marks in AI :";
        cin >> ai;
        cout << "Enter marks in MF :";
        cin >> mf;

        stu.emplace_back(roll, oocp, ai, mf);
    }

    sort(stu.begin(),stu.end(),Student::sort_dec);

    auto it = stu.begin();
    it->display1data();
    for (auto it = stu.begin(); it != stu.end(); it++)
    {
        it->displayData();
    }
    return 0;
}