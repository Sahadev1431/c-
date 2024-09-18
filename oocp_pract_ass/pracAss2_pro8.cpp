#include <iostream>
#include <string>
using namespace std;

const int max_sub = 5;

class faculty
{
    protected:
        string name;
        string qualification;
        string subjects[max_sub];
        int num_sub;
    public:
        faculty(){}
        faculty(const string& name,const string& qualification):name(name),qualification(qualification),num_sub(){}

        virtual void readdata()
        {
            cout<<"enter name :";
            cin>>name;
            cout<<"enter qualification :";                                      
            cin>>qualification;
            cout<<"enter num of subjects :";
            cin>>num_sub;
            cout<<"enter subjects :";
            for (int i = 0;i<num_sub;i++)
                {
                    cin>>subjects[i];
                }
        }
        virtual void display_data()
        {
            cout<<"name             :"<<name<<endl<<"qualification    :"<<qualification<<endl;
            cout<<"Can teach        :";
            for(int i = 0;i<num_sub;i++)
            {
                cout<<subjects[i]<<" ";
            }
            cout<<endl;
        }
};

class regular_faculty:public faculty
{
    public:
    regular_faculty(){}
        regular_faculty(const string& name,const string& qualification):faculty(name,qualification){}
    
    void readdata() override
    {
        faculty::readdata();
    } 
    void display_data() override
    {
        faculty::display_data();
        cout<<"Availability     : Full Time"<<endl;
        cout<<"Teaching subjects: At least 3 subjects"<<endl;
        cout<<"Institute type   : Part of institute alone"<<endl;
    }
};

class visiting_faculty:public faculty
{
    protected:
        int availability;
        int consult_time;
        string insti_name;
    public:
        visiting_faculty(){}
        visiting_faculty(const string& name,const string& qualification):faculty(name,qualification){}
    
        void readdata() override
        {
            faculty::readdata();
            cout<<"enter availability (eg. 1,2,3 days) :";
            cin>>availability;
            cout<<"enter consulting time (eg. 1,2,3 hours) :";
            cin>>consult_time;
            cout<<"enter institute you are from :";
            cin>>insti_name;
        }
        void display_data() override
        {
            faculty::display_data();
            cout<<"Can teach        : At least one subject"<<endl;
            cout<<"Availability     : "<<availability<<" days "<<endl;
            cout<<"Consulting time  :"<<consult_time<<" hours "<<endl;
            cout<<"Institute type   : Other"<<endl;
            cout<<"Institute name   :"<<insti_name<<endl;
        }
};

int main()
{
    cout<<"enter data for regular faculty"<<endl;
    regular_faculty r1;
    r1.readdata();
    cout<<"\nenter data for visiting faculty"<<endl;

    visiting_faculty v1;
    v1.readdata();
    r1.display_data();
    cout<<endl<<endl;
    v1.display_data();
    return 0;
}