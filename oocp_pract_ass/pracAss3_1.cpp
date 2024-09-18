#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Book
{
    int id;
    string name;
public:
    Book(int id,const string& name):id(id),name(name)
    {
        cout<<"book constructor\n";
    }
    ~Book()
    {
        cout<<"book distructor\n";
    }
    void displayBook1()
    {
        cout<<left;
        cout<<setw(20)<<"ID"
            <<setw(20)<<"NAME"
            <<setw(20)<<"CATAGORY"<<endl
            <<"----------------------------------------------------"<<endl;
    }
    void displayBook()
    {
        cout<<left;
        cout<<setw(20)<<id
            <<setw(20)<<name;
    }
};

class sales:public Book
{
    public:
    static int sales_count;
        sales(int id,const string& name):Book(id,name)
        {
            cout<<"sales constructor\n";
            sales_count++;
        }
        ~sales()
        {
            cout<<"Total sales book :"<<sales_count<<endl;
            cout<<"sales distructor\n";
        }
        void salesDisplay()
        {
            displayBook();
            cout<<left;
            cout<<setw(20)<<"Sales";
            cout<<endl;
        }
};
int sales::sales_count = 0;

class acedemics:public Book
{
    public:
    static int acedemic_count;
        acedemics(int id,const string& name):Book(id,name)
        {
            cout<<"acedemic constructor\n";
            acedemic_count++;
        }
        ~acedemics()
        {
            cout<<"Total acedemic book :"<<acedemic_count<<endl;
            cout<<"acedemics distructor\n";
        }
        void acedemicsDisplay()
        {
            displayBook();
            cout<<left;
            cout<<setw(20)<<"Acedemics";
            cout<<endl;
        }
};
int acedemics::acedemic_count = 0;

class thriller:public Book
{
    public:
    static int thriller_count;
        thriller(int id,const string& name):Book(id,name)
        {
            cout<<"thriller constructor\n"<<endl;
            thriller_count++;
        }
        ~thriller()
        {
            cout<<"Total thriller book :"<<thriller_count<<endl;
            cout<<"thriller distructor\n";
        }
        void thrillerDisplay()
        {
            displayBook();
            cout<<left;
            cout<<setw(20)<<"Thriller";
            cout<<endl;
        }
};
int thriller::thriller_count = 0;

 
int main()
{
vector<sales>s1;
vector<acedemics>a1;
vector<thriller>t1;
    int choice;
    do
    {
        cout<<"Choose operation \n";
        cout<<"1.Add to Sales\n2.Add to Acedemic\n3.Add to Thriller\n4.display\n0.Exit\n";
        cout<<"Enter choice :";
        cin>>choice;
        int bid1,bid2,bid3;
        string bname1,bname2,bname3;
        switch (choice)   
        {
            case 1:
                cout<<"Enter id for sales book:";
                cin>>bid1;
                cout<<"Enter name of sales book:";
                cin>>bname1;

                s1.emplace_back(bid1,bname1);
                cout<<"Book added to sales catagory\n";
                break;

            case 2:
                cout<<"Enter id for acedemic book:";
                cin>>bid2;
                cout<<"Enter name of acedemic book:";
                cin>>bname2;

                a1.emplace_back(bid2,bname2);
                cout<<"Book added to acedemic catagory\n";
                break;
            case 3:
                cout<<"Enter id for thriller book:";
                cin>>bid3;
                cout<<"Enter name of sales book:";
                cin>>bname3;

                t1.emplace_back(bid3,bname3);
                cout<<"Book added to thriller catagory\n";
                break;
            case 4:
                auto temp_it = s1.begin();
                temp_it->displayBook1();

                for(auto it1 =s1.begin();it1!=s1.end();++it1)
                {
                    it1->salesDisplay();
                }
                for(auto it2 =a1.begin();it2!=a1.end();++it2)
                {
                    it2->acedemicsDisplay();
                }
                for(auto it3 =t1.begin();it3!=t1.end();++it3)
                {
                    it3->thrillerDisplay();
                }

        }
    }while(choice!=0);


    return 0;
}




// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <vector>

// using namespace std;

// class Book
// {
// protected:
//     int id;
//     string name;

// public:
//     Book(int _id, const string &_name) : id(_id), name(_name)
//     {
//         cout << "Base class constructor called for Book with id: " << id << endl;
//     }

//     ~Book()
//     {
//         cout << "Base class destructor called for Book with id: " << id << endl;
//     }

//     virtual void displayBook()
//     {
//         cout << left;
//         cout << setw(20) << id
//              << setw(20) << name;
//     }
// };

// class Sales : public Book
// {
//     int copiesSold;

// public:
//     Sales(int _id, const string &_name, int _copiesSold) : Book(_id, _name), copiesSold(_copiesSold)
//     {
//         cout << "Derived class constructor called for Sales with id: " << id << endl;
//     }

//     ~Sales()
//     {
//         cout << "Derived class destructor called for Sales with id: " << id << endl;
//     }

//     void salesDisplay()
//     {
//         displayBook();
//         cout << left;
//         cout << setw(20) << "Sales"
//              << setw(20) << copiesSold << endl;
//     }
// };

// class Academics : public Book
// {
//     int pages;

// public:
//     Academics(int _id, const string &_name, int _pages) : Book(_id, _name), pages(_pages)
//     {
//         cout << "Derived class constructor called for Academics with id: " << id << endl;
//     }

//     ~Academics()
//     {
//         cout << "Derived class destructor called for Academics with id: " << id << endl;
//     }

//     void academicsDisplay()
//     {
//         displayBook();
//         cout << left;
//         cout << setw(20) << "Academics"
//              << setw(20) << pages << endl;
//     }
// };

// class Thriller : public Book
// {
//     string genre;

// public:
//     Thriller(int _id, const string &_name, const string &_genre) : Book(_id, _name), genre(_genre)
//     {
//         cout << "Derived class constructor called for Thriller with id: " << id << endl;
//     }

//     ~Thriller()
//     {
//         cout << "Derived class destructor called for Thriller with id: " << id << endl;
//     }

//     void thrillerDisplay()
//     {
//         displayBook();
//         cout << left;
//         cout << setw(20) << "Thriller"
//              << setw(20) << genre << endl;
//     }
// };

// int main()
// {
//     vector<Book *> books;

//     // Simple inheritance with Sales
//     books.push_back(new Sales(101, "Book1", 100));

//     // Hierarchical inheritance with Academics and Thriller
//     books.push_back(new Academics(201, "Book2", 200));
//     books.push_back(new Thriller(301, "Book3", "Mystery"));

//     // Display book details
//     cout << setw(20) << "ID"
//          << setw(20) << "Name"
//          << setw(20) << "Type"
//          << setw(20) << "Details" << endl;
//     cout << "-------------------------------------------------------------" << endl;

//     for (const auto &book : books)
//     {
//         book->displayBook();

//         // Check the type of the book and call the respective display function
//         if (dynamic_cast<Sales *>(book))
//         {
//             dynamic_cast<Sales *>(book)->salesDisplay();
//         }
//         else if (dynamic_cast<Academics *>(book))
//         {
//             dynamic_cast<Academics *>(book)->academicsDisplay();
//         }
//         else if (dynamic_cast<Thriller *>(book))
//         {
//             dynamic_cast<Thriller *>(book)->thrillerDisplay();
//         }

//         cout << endl;
//     }

//     // Clean up and delete allocated objects
//     for (const auto &book : books)
//     {
//         delete book;
//     }

//     return 0;
// }

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class person
{
    string name;
    int age, rollno;

public:
    void setdata()
    {
        cout << "Enter name: ";
        cin.ignore(); // Ignore any newline characters left in the buffer
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter roll no: ";
        cin >> rollno;
    }

    void display_data()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl
             << "Roll no: " << rollno << endl;
    }
};

int main()
{
    int numPersons;
    cout << "Enter the number of persons: ";
    cin >> numPersons;

    ofstream file;
    file.open("dev.txt", ios::out | ios::binary);

    if (!file.is_open())
    {
        cerr << "Error while creating file." << endl;
        return -1;
    }

    for (int i = 0; i < numPersons; ++i)
    {
        person p;
        p.setdata();
        file.write((char *)&p, sizeof(p));
    }

    file.close();

    ifstream file1;
    file1.open("dev.txt", ios::in | ios::binary);

    if (!file1.is_open())
    {
        cerr << "Error while opening file." << endl;
        return -1;
    }

    person p2;
    while (file1.read((char *)&p2, sizeof(p2)))
    {
        cout << "Data received from file:" << endl;
        p2.display_data();
        cout << endl;
    }

    file1.close();

    return 0;
}
