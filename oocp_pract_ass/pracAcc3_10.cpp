#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Structure to represent a student
struct Student {
    string name;
    double marks;
};

int main() {
    const string fileName = "students.txt";

    // Creating and writing to the file
    ofstream outFile(fileName);
    if (outFile.is_open()) {
        // Writing data for 5 students
        for (int i = 0; i < 5; ++i) {
            Student student;
            cout << "Enter name for student " << i + 1 << ": ";
            getline(cin, student.name);
            cout << "Enter marks for student " << i + 1 << ": ";
            cin >> student.marks;
            cin.ignore(); // Consume the newline character left in the stream
            outFile << student.name << " " << student.marks << endl;
        }
        outFile.close();
        cout << "Data written to file successfully.\n";
    } else {
        cerr << "Error while opening file for writing.\n";
        return 1; // Return with an error code
    }

    // Reading and displaying data from the file
    ifstream inFile(fileName);
    if (inFile.is_open()) {
        Student student;
        cout << "\nReading and displaying student data from the file:\n";
        while (inFile >> student.name >> student.marks) {
            cout << "Name: " << student.name << ", Marks: " << student.marks << endl;
        }
        inFile.close();
    } else {
        cerr << "Error while opening file for reading.\n";
        return 1; // Return with an error code
    }

    return 0; // Return with success code
}
