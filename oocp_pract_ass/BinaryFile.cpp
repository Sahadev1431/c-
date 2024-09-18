// #include <iostream>
// #include <iomanip>
// #include <vector>
// #include <fstream>

// using namespace std;

// class student
// {
// protected:
//     int rollno;
//     string name, stream;

// public:
//     void setdata()
//     {
//         cout << "Enter Roll no :";
//         cin >> rollno;
//         cout << "Enter name :";
//         cin >> name;
//         cout << "Enter stream :";
//         cin >> stream;
//     }

//     void displayStudent()
//     {
//         cout << left;
//         cout << setw(20) << "Roll no"
//              << ":" << rollno << endl;
//         cout << setw(20) << "Name"
//              << ":" << name << endl;
//         cout << setw(20) << "Stream"
//              << ":" << stream << endl;
//     }
// };

// class subject : public student
// {
// protected:
//     int marks[5];

// public:
//     void subSetdata()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << "Enter marks in subject " << i + 1 << ":";
//             cin >> marks[i];
//         }
//     }

//     void displaySubject()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << setw(20) << "Marks in subject " << i + 1 << ":" << marks[i] << endl;
//         }
//     }
// };

// class result : public subject
// {
//     float total, percentage;

// public:
//     void calTotal()
//     {
//         total = 0;
//         for (int i = 0; i < 5; i++)
//         {
//             total += marks[i];
//         }
//         percentage = (total * 100) / 500;
//     }

//     void displayResult()
//     {
//         cout << setw(20) << "Total marks"
//              << ":" << total << endl;
//         cout << setw(20) << "Percentage"
//              << ":" << percentage << endl;
//         if (percentage >= 40)
//         {
//             cout << "Student has passed" << endl
//                  << endl;
//         }
//         else
//         {
//             cout << "Student has failed" << endl
//                  << endl;
//         }
//     }
// };

// int main()
// {
//     int numstu;
//     cout << "Enter number of students :";
//     cin >> numstu;

//     ofstream outfile;
//     outfile.open("bin2File.txt", ios::out | ios::binary);
//     vector<result *> res;

//     for (int i = 0; i < numstu; ++i)
//     {
//         result *r1 = new result;
//         r1->setdata();
//         r1->subSetdata();
//         r1->calTotal();

//         res.emplace_back(r1);

//         outfile.write((char *)r1, sizeof(result));
//     }

//     outfile.close();

//     ifstream infile;
//     infile.open("bin2File.txt", ios::in | ios::binary);

//     result r2;
//     for (int i = 0; i < numstu; ++i)
//     {
//         cout << "displaying data for student " << i + 1 << endl;

//         if (infile.read((char *)(&r2), sizeof(result)))
//         {
//             r2.displayStudent();
//             r2.displaySubject();
//             r2.displayResult();
//         }
//         cout << endl;
//     }

//     infile.close();

//     // Clean up: delete objects created with 'new'

//     return 0;
// }











#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;

class student
{
protected:
    int rollno;
    string name, stream;

public:
    void setdata()
    {
        cout << "Enter Roll no :";
        cin >> rollno;
        cout << "Enter name :";
        cin >> name;
        cout << "Enter stream :";
        cin >> stream;
    }

    void displayStudent(ofstream &file)
    {
        file << left;
        file << setw(20) << "Roll no"
             << ":" << rollno << endl;
        file << setw(20) << "Name"
             << ":" << name << endl;
        file << setw(20) << "Stream"
             << ":" << stream << endl;
    }
};

class subject : public student
{
protected:
    int marks[5];

public:
    void subSetdata()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks in subject " << i + 1 << ":";
            cin >> marks[i];
        }
    }

    void displaySubject(ofstream &file)
    {
        for (int i = 0; i < 5; i++)
        {
            file << setw(20) << "Marks in subject " << i + 1 << ":" << marks[i] << endl;
        }
    }
};

class result : public subject
{
    float total, percentage;

public:
    void calTotal()
    {
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        percentage = (total * 100) / 500;
    }

    void displayResult(ofstream &file)
    {
        file << setw(20) << "Total marks"
             << ":" << total << endl;
        file << setw(20) << "Percentage"
             << ":" << percentage << endl;
        if (percentage >= 40)
        {
            file << "Student has passed" << endl
                 << endl;
        }
        else
        {
            file << "Student has failed" << endl
                 << endl;
        }
    }
};

int main()
{
    int numstu;
    cout << "Enter number of students :";
    cin >> numstu;

    ofstream outfile;
    outfile.open("textFile.txt", ios::out);

    vector<result *> res;

    for (int i = 0; i < numstu; ++i)
    {
        result *r1 = new result;
        r1->setdata();
        r1->subSetdata();
        r1->calTotal();

        res.emplace_back(r1);

        r1->displayStudent(outfile);
        r1->displaySubject(outfile);
        r1->displayResult(outfile);
    }

    outfile.close();

    // Reading and Displaying from the file
    ifstream infile;
    infile.open("textFile.txt", ios::in);

    if (!infile.is_open())
    {
        cerr << "Error while opening file." << endl;
        return -1;
    }

    string line;
    while (getline(infile, line))
    {
        cout << line << endl;
    }

    infile.close();

    // Clean up: delete objects created with 'new'
    for (result *r : res)
    {
        delete r;
    }

    return 0;
}
