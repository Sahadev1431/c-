#include <iostream>
using namespace std;

class Date
{
    int day,month,year;
public:
    Date(int day,int month,int year):day(day),month(month),year(year){}
    void addDays(int add_days)
    {
        int total_days = (year*360)+(month*30) + day+add_days;
        year = total_days/360;
        month = (total_days%360)/30;
        day = (total_days%360)%30;
    }
    void displayDate()
    {
        cout<<"date is : "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

 Date operator+(Date &obj,int days)
    {
        Date temp = obj;
        temp.addDays(days);
        return temp;
    }

int main()
{
    int d,m,y;
    cout<<"Enter day month year :";
    cin>>d>>m>>y;

    Date d1(d,m,y);
    d1.displayDate();
    int ad_d;
    cout<<"enter add day ";
    cin>>ad_d;

    Date d2 = d1+ad_d;
    d2.displayDate();
    // d1.addDays(ad_d);
    // d1.displayDate();
    return 0;
}


















