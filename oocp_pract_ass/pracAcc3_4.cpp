// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// class Staff {
// protected:
//     int code;
//     string name;

// public:
//     Staff(int employeeCode, const string& employeeName) : code(employeeCode), name(employeeName) {
//         cout << "Staff class parameterized constructor called for code " << code << endl;
//     }

//     ~Staff() {
//         cout << "Staff class destructor called for code " << code << endl;
//     }

//     void displayStaffInfo() {
//         cout << "Code: " << code << ", Name: " << name << endl;
//     }
// };

// class Teacher : public Staff {
// protected:
//     string subject;
//     string publication;

// public:
//     Teacher(int teacherCode, const string& teacherName, const string& subject, const string& publication)
//         : Staff(teacherCode, teacherName), subject(subject), publication(publication) {
//         cout << "Teacher class parameterized constructor called for code " << code << endl;
//     }

//     ~Teacher() {
//         cout << "Teacher class destructor called for code " << code << endl;
//     }

//     void displayTeacherInfo() {
//         displayStaffInfo();
//         cout << "Subject: " << subject << ", Publication: " << publication << endl;
//     }
// };

// class Typist : public Staff {
// protected:
//     int speed;

// public:
//     Typist(int typistCode, const string& typistName, int typingSpeed)
//         : Staff(typistCode, typistName), speed(typingSpeed) {
//         cout << "Typist class parameterized constructor called for code " << code << endl;
//     }

//     ~Typist() {
//         cout << "Typist class destructor called for code " << code << endl;
//     }

//     void displayTypistInfo() {
//         displayStaffInfo();
//         cout << "Typing Speed: " << speed << " words per minute" << endl;
//     }
// };

// class Officer : public Staff {
// protected:
//     char grade;

// public:
//     Officer(int officerCode, const string& officerName, char officerGrade)
//         : Staff(officerCode, officerName), grade(officerGrade) {
//         cout << "Officer class parameterized constructor called for code " << code << endl;
//     }

//     ~Officer() {
//         cout << "Officer class destructor called for code " << code << endl;
//     }

//     void displayOfficerInfo() {
//         displayStaffInfo();
//         cout << "Grade: " << grade << endl;
//     }
// };

// class Regular : public Typist {
// public:
//     Regular(int regularCode, const string& regularName, int typingSpeed)
//         : Typist(regularCode, regularName, typingSpeed) {
//         cout << "Regular class parameterized constructor called for code " << code << endl;
//     }

//     ~Regular() {
//         cout << "Regular class destructor called for code " << code << endl;
//     }

//     void displayRegularInfo() {
//         displayTypistInfo();
//     }
// };

// class Casual : public Typist {
// protected:
//     int dailyWages;

// public:
//     Casual(int casualCode, const string& casualName, int typingSpeed, int wages)
//         : Typist(casualCode, casualName, typingSpeed), dailyWages(wages) {
//         cout << "Casual class parameterized constructor called for code " << code << endl;
//     }

//     ~Casual() {
//         cout << "Casual class destructor called for code " << code << endl;
//     }

//     void displayCasualInfo() {
//         displayTypistInfo();
//         cout << "Daily Wages: $" << dailyWages << endl;
//     }
// };

// int main() {
//     // Teacher teacher(101, "John Doe", "Mathematics", "Advanced Algebra");
//     // teacher.displayTeacherInfo();

//     // cout << endl;

//     // Regular regularTypist(201, "Alice Smith", 60);
//     // regularTypist.displayRegularInfo();

//     // cout << endl;

//     // Casual casualTypist(301, "Bob Johnson", 45, 50);
//     // casualTypist.displayCasualInfo();

//     vector<Staff>s1;
//     vector<Teacher>t1;
//     vector<Typist>x1;

//     int s_code;
//     string s_name,t_code,t_name,t_sub,t_pub;
//     int choice;
//     do
//     {
//         cout<<"for which class do you want to create object "<<endl;
//         cout<<"1.Staff\n2.Teacher\n3.Typist\n4.Display\n0.Exit";
//         cout<<"Enter choice :";
//         cin>>choice;

//         switch(choice)
//         {
//             case 1: 
//                 cout<<"Enter code :";
//                 cin>>s_code;
//                 cout<<"Enter name :";
//                 cin>>s_name;

//                 s1.emplace_back(s_code,s_name);
//             case 2: 
//                 cout<<"Enter code :";
//                 cin>>t_code;
//                 cout<<"Enter name :";
//                 cin>>t_name;
//                 cout<<"Enter subject :";
//                 cin>>t_sub;
//                 cout<<"Enter publication :";
//                 cin>>t_pub;
//                 t1.emplace_back(t_code,t_name,t_sub,t_pub);

//             case 3:
//                 for(auto it = s1.begin();it!=s1.end();++it)
//                 {
//                     it->displayStaffInfo();
//                 }

//                 for(auto it = t1.begin();it!= t1.end();++it)
//                 {
//                     it->displayTeacherInfo();
//                 }
//         }
//     }while(choice!=0);

//     return 0;
// }


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Staff {
protected:
    int code;
    string name;

public:
    Staff(int employeeCode, const string& employeeName) : code(employeeCode), name(employeeName) {
        cout << "Staff class parameterized constructor called for code " << code << endl;
    }

    ~Staff() {
        cout << "Staff class destructor called for code " << code << endl;
    }

    void displayStaffInfo() const {
        cout << "Code: " << code << ", Name: " << name << endl;
    }
};

class Teacher : public Staff {
protected:
    string subject;
    string publication;

public:
    Teacher(int teacherCode, const string& teacherName, const string& teacherSubject, const string& teacherPublication)
        : Staff(teacherCode, teacherName), subject(teacherSubject), publication(teacherPublication) {
        cout << "Teacher class parameterized constructor called for code " << code << endl;
    }

    ~Teacher() {
        cout << "Teacher class destructor called for code " << code << endl;
    }

    void displayTeacherInfo() const {
        displayStaffInfo();
        cout << "Subject: " << subject << ", Publication: " << publication << endl;
    }
};

class Typist : public Staff {
protected:
    int speed;

public:
    Typist(int typistCode, const string& typistName, int typingSpeed)
        : Staff(typistCode, typistName), speed(typingSpeed) {
        cout << "Typist class parameterized constructor called for code " << code << endl;
    }

    ~Typist() {
        cout << "Typist class destructor called for code " << code << endl;
    }

    void displayTypistInfo() const {
        displayStaffInfo();
        cout << "Typing Speed: " << speed << " words per minute" << endl;
    }
};

int main() {
    vector<Staff> staffList;
    vector<Teacher> teacherList;
    vector<Typist> typistList;

    int choice;
    do {
        cout << "\n1. Add Staff\n2. Add Teacher\n3. Add Typist\n4. Display Info\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int code;
                string name;
                cout << "Enter Staff Code: ";
                cin >> code;
                cout << "Enter Staff Name: ";
                cin.ignore();
                getline(cin, name);
                staffList.emplace_back(code, name);
                break;
            }
            case 2: {
                int code;
                string name, subject, publication;
                cout << "Enter Teacher Code: ";
                cin >> code;
                cout << "Enter Teacher Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Subject: ";
                getline(cin, subject);
                cout << "Enter Publication: ";
                getline(cin, publication);
                teacherList.emplace_back(code, name, subject, publication);
                break;
            }
            case 3: {
                int code, speed;
                string name;
                cout << "Enter Typist Code: ";
                cin >> code;
                cout << "Enter Typist Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Typing Speed: ";
                cin >> speed;
                typistList.emplace_back(code, name, speed);
                break;
            }
            case 4:
                for (const auto& staff : staffList) {
                    staff.displayStaffInfo();
                }
                for (const auto& teacher : teacherList) {
                    teacher.displayTeacherInfo();
                }
                for (const auto& typist : typistList) {
                    typist.displayTypistInfo();
                }
                break;
            case 0:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
