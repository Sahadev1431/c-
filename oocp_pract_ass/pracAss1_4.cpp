#include<iostream>
using namespace std;

class Date
{
    int day,month,year;

    public:
        Date(int d,int m,int y):day(d),month(m),year(y){}
        int days_in_month()
        {
            int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
            if(month==2&&(year%4==0 &&(year%100!=0 || year%400==0)))
            {
                return 29;
            }
            else 
            {
                return day[month];
            }
        }

        void sum_days(int additional_days)
        {
            day+=additional_days;
            while(day>days_in_month())
            {
                day-=days_in_month();
                ++month;

                if(month>12)
                {
                    month = 1;
                    ++year;
                }
            }
        }
        void display_date()
        {
            cout<<"date : "<<day<<"/"<<month<<"/"<<year;
        }
};

int main()
{
    int day,month,year;
    cout<<"enter date (date month year ):"<<endl;
    cin>>day>>month>>year;

    Date d1(day,month,year);
    d1.display_date(); cout<<endl;

    int add_days;
    cout<<"add days to add :";
    cin>>add_days;

    d1.sum_days(add_days);
    d1.display_date();
    return 0;
}