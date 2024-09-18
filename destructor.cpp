#include <iostream>
using namespace std;

class num
{
    public:
    static int count;
        num()
        {
            count++;
            cout<<"this time constuctor called for object no "<<count<<endl;
        }
        ~num()
        {
            cout<<"this time distructor called for object no "<<count<<endl;
            count--;
        }
};
int num::count;
int main()
{
    num n1;
    {
        num n2;
        num n3;
    }
    return 0;
}