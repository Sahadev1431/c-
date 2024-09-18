#include <iostream>
using namespace std;
class shop
{
    int id[100];
    int price[100];
    int counter;
    
    public:
        void init_count()
        {
            counter = 0;
        }
        void setdata();
        void display();
};
void shop::setdata()
{
    cout<<"enter id of item no "<<counter+1<<":"<<endl;
    cin>>id[counter];
    cout<<"enter price:"<<endl;
    cin>>price[counter];
    counter++;
    
}
void shop:: display()
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of item with id "<<id[i]<<" is "<<price[i]<<endl;
    }
    
}

int main()
{
    shop s;
    s.init_count();
    s.setdata();
    s.setdata();
    s.setdata();
    s.display();
    return 0;
}