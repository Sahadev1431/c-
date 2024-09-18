#include <iostream>
#include <string>
using namespace std;


class cwh
{
    protected:
    string title;
    int rating ;
    public:
        cwh(string s,int r)
        {
            title = s;
            rating = r;
        }
        void virtual display(){}
};

class cwh_vid:public cwh
{
    protected:
    int vid_len;
    public:
        cwh_vid(string s,int r,int vl):cwh(s,r)
        {
            vid_len = vl;
        }
        void display()
        {
            cout<<"the title of vid is "<<title<<endl;
            cout<<"the rating of vid  is "<<rating<<endl;
            cout<<"the length of vid  is "<<vid_len<<endl;
        }
};
class cwh_web:public cwh
{
    protected:
    int words;
    public:
        cwh_web(string s,int r,int ws):cwh(s,r)
        {
            words = ws;
        }
        void display()
        {
            cout<<"the title of web is "<<title<<endl;
            cout<<"the rating of web  is "<<rating<<endl;
            cout<<"the words of web  is "<<words<<endl;
        }
};

int main()
{
    cwh_vid vid1("django video",5,15);
    cwh_web web1("c++ website",5,450);
    cwh* ptr[2];
    ptr[0] = &vid1;
    ptr[1] = &web1;

    // ptr[0]->display();
    // cout<<endl<<endl;
    // ptr[1]->display();

    for (int i = 0; i < 2; i++)
    {
        ptr[i]->display();
        cout<<endl<<endl;

    }
    
    return 0;
}
