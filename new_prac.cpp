#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void addSeconds(int additionalSeconds) {
        minutes += additionalSeconds / 60;
        seconds += additionalSeconds % 60;
        if (seconds >= 60) {
            seconds -= 60;
            minutes++;
        }
        if (minutes >= 60) {
            minutes -= 60;
            hours++;
        }
    hours = hours%24;
    }

    void display() const {
        cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    }
};

int main() {
    int secondsToAdd;
    
    cout << "Enter seconds to add: ";
    cin >> secondsToAdd;

    Time currentTime(23, 30, 45); // Initial time (12 hours, 30 minutes, 45 seconds)
    
    cout << "Current time: ";
    currentTime.display();

    currentTime.addSeconds(secondsToAdd);

    cout << "Updated time after adding " << secondsToAdd << " seconds: ";
    currentTime.display();

    return 0;
}
