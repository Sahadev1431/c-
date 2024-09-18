#include <iostream>
using namespace std;

template <class t>
t Sum(t a,t b)
{
    return a+b;
}
template <class t>
t Sum(t a,t b,t c)
{
    return a+b+c;
}

int main()
{
    cout<<"the sum of two numbers is "<<Sum(4,6)<<endl;
    cout<<"the sum of three numbers is "<<Sum(4,6,9);
    return 0;
}