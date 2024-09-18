#include <iostream>
using namespace std;
int factorial(int num)
{
    for (int i =num;i>=2;i--)
    {
    return num*factorial(num-1);
}
}
int main()
{
    int number = 4;
    int x = factorial(number);
    cout<<"the factorial of "<<number<<" is "<<x;
    return 0;
}