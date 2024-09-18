
            cout<<"derived class acedemic distructor called for book id "<<book_id<<endl;
        }
        void acedemic_display()
        {
            cout<<"\nbook is from acedemic catagory "<<endl;
            display();
        }
};

class thriller:public book
{
    public:
        thriller(){};
        thriller(int bid ,const string& bname): book(bid,bna