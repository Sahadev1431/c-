#include <iostream>
using namespace std;

namespace TotalMarks {
    float total_marks(const float marks[], int numSubjects) {
        float total = 0.0;
        for (int i = 0; i < numSubjects; ++i) {
            total += marks[i];
        }
        return total;
    }
}

class Marks {
private:
    float subjectMarks[5]; 

public:
    void setMarks() {
        cout << "Enter marks for each subject:\n";
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << i + 1 << ": ";
            cin >> subjectMarks[i];
        }
    }

    void displayTotalMarks() const {
        float total = TotalMarks::total_marks(subjectMarks, 5);
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Marks studentMarks;
    studentMarks.setMarks();
    studentMarks.displayTotalMarks();

    return 0;
}