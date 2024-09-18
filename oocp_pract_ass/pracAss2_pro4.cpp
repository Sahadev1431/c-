#include <iostream>
#include <string>
using namespace std;

class staff
{
    protected:
        int code;
        string name;
    public:
        staff(int staffcode,const string& staffname):code(staffcode),name(staffname)
        {
            cout<<"base class staff parameterized constructor is called"<<endl;
        }
        ~staff()
        {
            cout<<"base class staff parameterized distructor is called"<<endl;
        }
        void staff_display()
        {
            cout<<"code :"<<code<<endl;
            cout<<"name :"<<name<<endl;
        }
};


class teacher:public staff
{
    protected:
        string subject;
        string publication;
    public:
        teacher(int teacher_code,const string& teacher_name,const string& t_sub,const string& t_pub):staff(teacher_code,teacher_name),subject(t_sub),publication(t_pub)
        {
            cout<<"derived class teacher parameterized constructor called"<<endl;
        }
        ~teacher()
        {
            cout<<"derived class teacher parameterized distructor called"<<endl;
        }
        void teacher_display()
        {
            staff_display();
            cout<<"subject :"<<subject<<endl;
            cout<<"publication :"<<publication<<endl;
        }
};

class typist:public staff
{
    protected:
        int speed;
    public:
        typist(int t_code,const string& t_name,int t_speed):staff(t_code,t_name),speed(t_speed)
        {
            cout<<"derived class typist parameterized connstructor called"<<endl;
        }
        ~typist ()
        {
            cout<<"derived class typist parameterized distructor called"<<endl;
        }
        void typist_display()
        {
            staff_display();
            cout<<"typing speed is "<<speed<<" words per minute"<<endl;
        }
};

class officer:public staff
{
    protected:
        char grade;
    public:
        officer(int o_code,const string& o_name,int o_grade):staff(o_code,o_name),grade(o_grade)
        {
            cout<<"derived class officer parameterized constructor called "<<endl;
        }
        ~officer()
        {
            cout<<"derived class officer parameterized distructor called"<<endl;
        }
        void officer_display()
        {
            staff_display();
            cout<<"grade : "<<grade<<endl;
        }
};

class regular:public typist
{
    public:
    regular(int r_code,const string& r_name,int r_speed):typist(r_code,r_name,r_speed)
    {
        cout<<"derived class regular parameterized constructor called "<<endl;
    }
    ~regular()
    {
        cout<<"derived class regular parameterized distructor called"<<endl;
    }
    void regular_display()
    {
        typist_display();
    }
};

class casual:public typist
{
    protected:
        int daily_wages;
    public:
        casual(int c_code,const string& c_name,int c_speed,int c_dailywages):typist(c_code,c_name,c_speed),daily_wages(c_dailywages)
        {
            cout<<"derived class casual parameterized constructor called "<<endl;
        }
        ~casual()
        {
            cout<<"derived class casual parameterized distructor called "<<endl;
        }
        void casual_display()
        {
            typist_display();
            cout<<"daily wages :"<<daily_wages<<endl;
        }
};

int main()
{
    casual c1(101,"sahadev",150,50000);
    c1.casual_display();
    cout<<endl<<endl;
    regular r1(102,"gautam",140);
    r1.regular_display();
    cout<<endl<<endl;
    officer o1(103,"chirag",'A');
    o1.officer_display();
    cout<<endl<<endl;
    typist t1(104,"jatin",145);
    t1.typist_display();
    cout<<endl<<endl;
    teacher tt1(105,"kartik","coding","c++");
    tt1.teacher_display();
    cout<<endl<<endl;
    staff s1(106,"mann");
    s1.staff_display();
    return 0;
}