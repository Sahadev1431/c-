#include <iostream>
using namespace std;

class student
{
    protected:
        int roll_no;
    public: 
        void set_stu_data()
        {
            cout<<"enter roll no:"<<endl;
            cin>>roll_no;
        }
}; 

class test:virtual public student
{
    protected:
        float maths,aiml;
    public:
        void set_test_data()
        {
            cout<<"enter marks in maths :"<<endl;
            cin>>maths;
            cout<<"enter marks in aiml :"<<endl;
            cin>>aiml;
        }
};

class sports:virtual public student
{
    protected:
        float pt_marks;
    public:
        void set_sports_data()
        {
            cout<<"enter marks in pt:";
            cin>>pt_marks;
        }
};

class total:public test,public sports
{
    float total;
    float percentage;
    public:
        void total_marks()
        {
            total = maths+aiml+pt_marks;
        }
        void perc()
        {
            percentage =(total * 100)/300;
        }
        void get_details()
        {
            set_stu_data();
            set_test_data();
            set_sports_data(); 
            total_marks();
            perc();
            cout<<endl<<endl;
            cout<<"Roll no      :"<<roll_no<<endl
                <<"maths marks  :"<<maths<<endl
                <<"aiml marks   :"<<aiml<<endl
                <<"pt marks     :"<<pt_marks<<endl
                <<"total        :"<<total<<endl
                <<"perecentage  "<<percentage;
        }
};

int main()
{
    total t1;
    t1.get_details();
   
    return 0;
}
