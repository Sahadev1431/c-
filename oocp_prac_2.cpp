/*
Q2. Write a program to create class Date (int day, int month, int year). 
    Read a value as day from user to display new date after adding the value to day in Date.
*/
//===================================================================================================================================================================================

#include <iostream>

using namespace std;

class Date {
public:
    int day;
    int month;
    int year;

    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void addDays(int additionalDays) {
        day += additionalDays;

        while (day > getDaysInMonth()) {
            day -= getDaysInMonth();
            month++;

            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    int getDaysInMonth() {
        static const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int days = daysInMonth[month];

        if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
            days = 29;
        }

        return days;
    }

    void displayDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    int day, month, year, additionalDays;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    Date date(day, month, year);

    cout << "Enter additional days to add: ";
    cin >> additionalDays;

    date.addDays(additionalDays);
    date.displayDate();

    return 0;
}