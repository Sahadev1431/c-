#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Book
{
    int id;
    string authorName,bookName;
    double price;

public:
    Book(int id,const string& bookName,const string& authorName,double price):id(id),bookName(bookName),authorName(authorName),price(price){}
    double getprice()
    {
        return price;
    }
    static bool sort_accend(Book &a,Book &b)
    {
        return a.getprice() < b.getprice();
    }

    void displayBook()
    {
        cout<<left;
        cout<<setw(20)<<id
            <<setw(20)<<bookName
            <<setw(20)<<authorName
            <<setw(20)<<fixed<<setprecision(2)<<price<<endl;
    }
};

int main()
{
    int numbook;
    cout<<"Enter number of books :";
    cin>>numbook;

    vector<Book>bk;

    for(int i = 0;i<numbook;++i)
    {
        int id;
        string authorName,bookName;
        double price;

        cout<<"Enter details for Book "<<i+1<<" :"<<endl;
        cout<<"Enter id :";
        cin>>id;
        cout<<"Enter Book name :";
        cin.ignore();
        getline(cin,bookName);
        cout<<"Enter Author name :";
        cin.ignore();
        getline(cin,authorName);
        cout<<"Enter price :";
        cin>>price;

        bk.emplace_back(id,bookName,authorName,price);
    }

    sort(bk.begin(),bk.end(),Book::sort_accend);

    cout<<left;
    cout<<setw(20)<<"ID"
        <<setw(20)<<"BOOK NAME"
        <<setw(20)<<"AUTHOR NAME"
        <<setw(20)<<"PRICE"<<endl
        <<"----------------------------------------------------------------------------------------------------------------------------------------"<<endl;

        for(auto it = bk.begin();it!=bk.end();++it)
        {
            it->displayBook();
        }

    return 0;
}