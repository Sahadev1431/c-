// #include <iostream>
// #include <string>
// using namespace std;

// class xyz
// {
//     int a;
//     public:
//         void setdata()
//         {
//             cout<<"enter a number:";
//             cin>>a;
//         }
//         void show()
//         {
//             cout<<"the number is "<<a;
//         }

//         xyz sum(xyz t2)
//         {
//             xyz t3;
//             t3.a = a+t2.a;
//             return t3;              
//         }
// };

// int main()
// {
//     xyz t1,t2,t3;
//     cout<<"for obj 1"<<endl;
//     t1.setdata();
//     cout<<"for obj 2"<<endl;
//     t2.setdata();
//     t3 = t1.sum(t2);
//     t3.show();
//     return 0;
// }


#include <iostream>
using namespace std;

class complex
{
    int real,imaginary;
public:
    complex(){}
    complex(int a,int b):real(a),imaginary(b){}
    void display()
    {
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
    complex operator +(complex c2)
    {
        complex temp;
        temp.real = real + c2.real;
        temp.imaginary = imaginary + c2.imaginary;
        return temp;

    }
};

int main()
{
    complex c1(5,4);
    complex c2(7,6);
    complex c3 = c1+c2;
    c3.display();
    // c1.display();
    return 0;
}