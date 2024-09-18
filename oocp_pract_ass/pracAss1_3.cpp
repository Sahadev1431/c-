// #include <iostream>
// using namespace std;

// class Time
// {
//     int hour,minute;
// public:
//     Time(int h,int m):hour(h),minute(m){}
//     void add_time(int additional_time)
//     {
//         minute  = minute+additional_time;
//         hour = hour+(minute/60);
//         minute = minute%60;
//         hour = hour%24;
//     }
//     void dis_time()
//     {
//         cout<<"Time :"<<hour<<" :"<<(minute<10?"0":"")<<minute<<endl;
//     }
// };

// int main()
// {
//     int ho,mi,add_time;
//     cout<<"Enter hour and minute:";
//     cin>>ho>>mi;
//     if(ho>24||mi>60)
//     {
//         cout<<"invalid time input";
//         return 1;
//     }
//     Time t1(ho,mi);
//     t1.dis_time();
    

//     cout<<"Enter minutes to add :";
//     cin>>add_time;
//     t1.add_time(add_time);
//     t1.dis_time();
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

class Time
{
    int h,m;
public:
    Time(int h,int m):h(h),m(m){}
    void add_min(int min)
    {
        h = h + (min/60);
        m = (m + min)%60;
        h = h%24;
    }
    void display_tine()
    {
        cout<<"Time is : "<<h<<" :"<<m<<endl;
    }
};


int main()
{
    int h,m;
    cout<<"Enter current time by space seperated :";
    cin>>h>>m;
    if(h>24)
    {
        cout<<"invalid input";
        exit(1);
    }
    Time t1(h,m);
    t1.display_tine();
    int add_min;
    cout<<"Enter minute to add :";
    cin>>add_min;
    t1.add_min(add_min);
    cout<<"New Time\n";
    t1.display_tine();
    return 0;
}