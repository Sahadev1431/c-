#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void setdata1(int n1)
    {
        base1int = n1;
    }
};

class base2
{
protected:
    int base2int;

public:
    void setdata2(int n1)
    {
        base2int = n1;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of base 1 is " << base1int << endl;
        cout << "the value of base 2 is " << base2int << endl;
        cout << "the sum is " << base1int + base2int << endl;
    }
};

int main()
{
    derived d1;
    d1.setdata1(35);
    d1.setdata2(20);
    d1.show();
    return 0;
}