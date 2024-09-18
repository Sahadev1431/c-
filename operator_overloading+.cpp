#include <iostream>
using namespace std;
class demo
{
    int a;

public:
    void get_data()
    {
        cout << "enter nmber:";
        cin >> a;
    }
    void display_data()
    {
        cout << "value is " << a << endl;
    }

    demo operator+(demo ob2)
    {
        demo ob3;
        ob3.a = a + ob2.a;
        return ob3;
    }
};

int main()
{
    demo ob1, ob2, ob3;
    ob1.get_data();
    ob2.get_data();
    ob3 = ob1+ob2;
    // ob1.display_data()
    ob3.display_data();
}