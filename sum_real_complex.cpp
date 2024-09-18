#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int sum_real(complex, complex);
    int sum_complex_part(complex, complex);
};
class complex
{
    int a, b;

public:
    //we are making friend functions of class calculator individually
    // friend int calculator::sum_real(complex o1, complex o2);
    // friend int calculator::sum_complex_part(complex o1, complex o2);

    //but if we have 100 func in class calculator then we have to declare entire friend calculator class.we should not do individually,it takes time.
    friend class calculator; // now all functions of calculator can access private of complex,
    void setdata(int v1, int v2);
    void getdata();
    int sum_complex(complex o1, complex o2);
};
void complex::setdata(int v1, int v2)
{
    a = v1;
    b = v2;
}
void complex::getdata()
{
    cout << "complex number is " << a << "+" << b << "i" << endl;
}
int complex::sum_complex(complex o1, complex o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}
int calculator::sum_real(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calculator::sum_complex_part(complex o1, complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    complex o1, o2, o3;
    calculator cal;
    o1.setdata(8, 7);
    o1.getdata();

    o2.setdata(9, 5);
    o2.getdata();

    o3.sum_complex(o1, o2);
    o3.getdata();

    int res_real = cal.sum_real(o1, o2);
    cout << "the sum of real part is " << res_real << endl;

    int res_comp = cal.sum_complex_part(o1, o2);
    cout << "the sum of complex part is " << res_comp << "i";
    return 0;
}