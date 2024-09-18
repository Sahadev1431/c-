#include <iostream>
#include <string>
using namespace std;

class book
{
    protected:
        int book_id;
        string book_name;
    public:
        static int count;
        book(){};
        book(int bid , const string& bname) : book_id(bid),book_name(bname)
        {   
            cout<<"base class book constructor called for book id  "<<book_id<<endl;
        }
        ~book()
        {
            cout<<"base class book distructor called for book id "<<book_id<<endl;
            cout<<"total books are "<<count<<endl;
        }

        void display()
        {
            cout<<"book id is "<<book_id<<" and book name is "<<book_name<<endl;
        }
};

int book::count;

class sales:public book
{
    public:
        static int sales_count;
        sales(){};
        sales(int bid ,const string& bname): book(bid,bname)
        {
            count++;
            sales_count++;
            cout<<"derived class sales constructor called for book id "<<book_id<<endl;
        }
        ~sales()
        {
            cout<<"derived class sales distructor called for book id "<<book_id<<endl;
            cout<<"total sales books are "<<sales_count<<endl;

        }
        void sales_display()
        {
            // cout<<"this is sales book "<<sales_count;
            cout<<"book is from sales catagory "<<endl;
            display();
        }
};
int sales::sales_count;

class acedemic:public book
{
    public:
        static int acedemic_count;
        acedemic(){};
        acedemic(int bid ,const string& bname): book(bid,bname)
        {
            count++;
            acedemic_count++;
            cout<<"derived class acedemic constructor called for book id "<<book_id<<endl;
        }
        ~acedemic()
        {
            cout<<"total acedemic books are "<<acedemic_count<<endl;
            cout<<"derived class acedemic distructor called for book id "<<book_id<<endl;
        }
        void acedemic_display()
        {
            cout<<"book is from acedemic catagory "<<endl;
            display();
        }
};
int acedemic::acedemic_count;

class thriller:public book
{
    public:
        static int thriller_count;
        
        thriller(){};
        thriller(int bid ,const string& bname): book(bid,bname)
        {
            count++;
            thriller_count++;
            cout<<"derived class sales constructor called for book id "<<book_id<<endl;
        }
        ~thriller()
        {
            cout<<"total thriller books are "<<thriller_count<<endl;
            cout<<"derived class sales distructor called for book id "<<book_id<<endl;
        }
        void thriller_display()
        {
            cout<<"book is from thriller catagory "<<endl;
            display();
        }
};

int thriller::thriller_count;

int main()
{
    sales s1(101,"sales1");
    s1.sales_display();

    cout<<endl;

    sales s2(102,"sales2");
    s2.sales_display();

    cout<<endl;

    thriller t1(102,"thriller1");
    t1.thriller_display();
    return 0;
   
}