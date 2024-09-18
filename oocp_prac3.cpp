/*
Q3. Create class STUDENT having rollno, name and age as data members, also take subject with three subjects and initialize their value with minimum passing marks. 
    Using member function, modify marks of student with specific rollno which is given by user
*/
//===================================================================================================================================================================================

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    int rollno;
    string name;
    int age;
    double subject1;
    double subject2;
    double subject3;

    Student(int r, string n, int a)
        : rollno(r), name(n), age(a), subject1(64.0), subject2(48.0), subject3(76.0) {}

    void modifyMarks(double newSubject1, double newSubject2, double newSubject3) {
        subject1 = newSubject1;
        subject2 = newSubject2;
        subject3 = newSubject3;
    }
};

int main() {
    Student student(26, "Sahadev",22);

    cout << "Student Details:\n";
    cout << "Roll No: " << student.rollno << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Marks in Subject 1: " << student.subject1 << endl;
    cout << "Marks in Subject 2: " << student.subject2 << endl;
    cout << "Marks in Subject 3: " << student.subject3 << endl;

    double newSubject1, newSubject2, newSubject3;
    cout << "\nEnter new marks for the student:\n";
    cout << "Marks in Subject 1: ";
    cin >> newSubject1;
    cout << "Marks in Subject 2: ";
    cin >> newSubject2;
    cout << "Marks in Subject 3: ";
    cin >> newSubject3;

    student.modifyMarks(newSubject1, newSubject2, newSubject3);

    cout << "\nUpdated Student Details:\n";
    cout << "Roll No: " << student.rollno << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Marks in Subject 1: " << student.subject1 << endl;
    cout << "Marks in Subject 2: " << student.subject2 << endl;
    cout << "Marks in Subject 3: " << student.subject3 << endl;

    return 0;
}
