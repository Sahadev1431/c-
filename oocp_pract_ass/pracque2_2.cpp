#include <iostream>
using namespace std;

class Date
{
    int day,month,year;
public:
    Date(int day,int month,int year):day(day),month(month),year(year){}
    void displayDate()
    {
        cout<<"Date :"<<day<<"/"<<month<<"/"<<year<<endl;
    }

    Date operator+()
    {
        Date temp(day,month,year);
        temp.day++;
        
        if (temp.day>30)
        {
            temp.day = 1;
            temp.month++;

            if(temp.month>12)
            {
                temp.month = 1;
                temp.year++;
            }
        }
        return temp;
    }
};

int main()
{
    Date d1(02,05,2023);
    Date next_day = +d1;
    next_day.displayDate();
    return 0;
}