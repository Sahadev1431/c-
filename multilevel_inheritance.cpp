#include <iostream>
using namespace std;

class student
{
    protected:
        int roll_no;
    public:
        int setdata(int r)
        {
            roll_no = r;
        }
        void getdata()
        {
            cout<<"roll no:"<<roll_no<<endl;
        }
};

class marks:public student
{
    protected:
        float maths,aiml;
    public:
        float setmarks(float m1,float m2)
        {
            maths = m1;
            aiml = m2;
        }
        void show_marks()
        {
            cout<<"your marks in marhs are:"<<maths<<endl;
            cout<<"your marks in artificial intelligence and machine learning are:"<<aiml<<endl;
        }
};

class result:public marks
{
    float percentage;
        public:
        void count_per()
        {
            percentage = (maths+aiml)/2;
        }

        void display()
        {
            getdata();
            show_marks();
            count_per();
            cout<<"your percentage is "<<percentage<<" %"<<endl;
        }
};

int main()
{
    result sahadev;
    sahadev.setdata(26);
    sahadev.setmarks(90,99);
    sahadev.display();
    return 0;
}