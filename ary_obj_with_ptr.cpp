#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;
    public:
        void setdata(int a,float b)
        {
            id = a;
            price = b;
        }
        void getdata()
        {
            cout<<"id is "<<id<<endl;
            cout<<"price is "<<price<<endl;
        }
};

int main()
{
    int id,size;
    float price;
    cout<<"enter size:";
    cin>>size;
    shop* ptr = new shop[size];
    shop* temp = ptr;

    for(int i = 0;i<size;i++)
    {
        cout<<"enter id for item "<<i+1<<":";
        cin>>id;
        cout<<"enter price for item "<<i+1<<":";
        cin>>price;
        ptr->setdata(id,price);
        ptr++;
    }
    for(int i = 0;i<size;i++)
    {
        // cout<<"id is :"<<id;
        // cout<<"price is :"<<price;
        cout<<"details of item "<<i+1<<":"<<endl;
        temp->getdata();
        cout<<endl;
        temp++;
    }
    return 0;
}




// #include <iostream>
// #include <string>

// using namespace std;

// class Book {
// protected:
//     int id;
//     string name;

// public:
//     Book(int bookId, const string& bookName) : id(bookId), name(bookName) {
//         cout << "Base class constructor called for book ID " << id << endl;
//     }

//     ~Book() {
//         cout << "Base class destructor called for book ID " << id << endl;
//     }

//     void displayDetails() {
//         cout << "Book ID: " << id << ", Name: " << name << endl;
//     }
// };

// class Sales : public Book {
// public:
//     Sales(int bookId, const string& bookName) : Book(bookId, bookName) {
//         cout << "Derived class (Sales) constructor called for book ID " << id << endl;
//     }

//     ~Sales() {
//         cout << "Derived class (Sales) destructor called for book ID " << id << endl;
//     }
// };

// class Academics : public Book {
// public:
//     Academics(int bookId, const string& bookName) : Book(bookId, bookName) {
//         cout << "Derived class (Academics) constructor called for book ID " << id << endl;
//     }

//     ~Academics() {
//         cout << "Derived class (Academics) destructor called for book ID " << id << endl;
//     }
// };

// class Thrillers : public Book {
// public:
//     Thrillers(int bookId, const string& bookName) : Book(bookId, bookName) {
//         cout << "Derived class (Thrillers) constructor called for book ID " << id << endl;
//     }

//     ~Thrillers() {
//         cout << "Derived class (Thrillers) destructor called for book ID " << id << endl;
//     }
// };

// int main() {
//     Sales salesBook(1, "Sales Book");
//     salesBook.displayDetails();

//     cout << endl;

//     Academics academicBook(2, "Academic Book");
//     academicBook.displayDetails();

//     Thrillers thrillerBook(3, "Thriller Book");
//     thrillerBook.displayDetails();

//     return 0;
// }