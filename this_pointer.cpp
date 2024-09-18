// #include <iostream>
// using namespace std;

// class simple
// {
//     int a;
//     public:
//         void setdata(int a)
//         {
//             a = a;       //priority will be given to local variable not class variable
//                         //class variable int a will not set as function variable. 
//         }
//         void getdata()
//         {
//             cout<<"the value of a is "<<a;
//         }
// };

// int main()
// {
//     simple s;
//     s.setdata(5);
//     s.getdata();  //this will not throw an error but give garbage value not '5'.
//     return 0;
// }


#include <iostream>
using namespace std;

class simple
{
    int a;
    public:
        void setdata(int a)
        {
            this->a = a;  //this will set int a value as a of function .
        }
        void getdata()
        {
            cout<<"the value of a is "<<a;
        }
};

int main()
{
    simple s;
    s.setdata(5);
    s.getdata();
    return 0;
}