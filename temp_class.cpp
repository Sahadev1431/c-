// #include <iostream>
// using namespace std;

// template <class t>
// class addition
// {
//     t a,b;
// public:
//     void getdata()
//     {
//         cout<<"enter number 1:";
//         cin>>a;
//         cout<<"enter number 2:";
//         cin>>b;
//     }
    
//     t sum()
// };

// // template <class t>
// // t addition <t>:: sum()
// // {
// //     return a+b;
// // }

// int main()
// {
//     addition <int>a1;
//     a1.getdata();
//     cout<<"the sum is "<<a1.sum();
//     return 0;
// }


// #include <iostream>

// using namespace std;

// class Date {
// private:
//     int month;
//     int day;
//     int year;

// public:
//     Date(int m, int d, int y) : month(m), day(d), year(y) {}

//     Date operator+(int daysToAdd) {
//         Date temp = {month,day+daysToAdd,year};
//         if (temp.day>30)
//         {
//             temp.day = temp.day - 30;
//             temp.month++;
//         }
//         if (temp.month>12)
//         {
//             temp.month = 1;
//             temp.year ++;
//         }
//         return temp;
//     }

//     void display() const {
//         cout << "Date: " << month << "/" << day << "/" << year << endl;
//     }
// };

// int main() {
//     Date date(2, 15, 2023);
//     date.display();

//     Date newDate = date + 445;
//     newDate.display();

//     return 0;
// }









#include <iostream>

using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(int m, int d, int y) : month(m), day(d), year(y) {}

    Date operator+(int daysToAdd) {
        Date temp = {month, day + daysToAdd, year};

        while (temp.day > 30) {
            temp.day -= 30;
            temp.month++;

            if (temp.month > 12) {
                temp.month = 1;
                temp.year++;
            }
        }

        // Adjust year based on the remaining days
        int remainingDays = temp.day + (temp.month - 1) * 30;
        temp.year += remainingDays / 360;
        temp.day = remainingDays % 30; // Corrected to use % 30

        return temp;
    }

    void display() const {
        cout << "Date: " << month << "/" << day << "/" << year << endl;
    }
};

int main() {
    Date date(2, 15, 2023);
    date.display();

    Date newDate = date + 445;
    newDate.display();

    return 0;
}
