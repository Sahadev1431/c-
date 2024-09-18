#include <iostream>
using namespace std;

class base1
{
    public:
        void greet()
        {
            cout<<"how are you?"<<endl;
        }
};

class base2
{
    public:
        void greet()
        {
            cout<<"kem cho?"<<endl;
        }
};

class derived:public base1,public base2
{
    public:
        void greet()
        {
            // cout<<"jddfhfmhbjd";  // will print "jddfhfmhbjd".
            // base1::greet();  //willl print "how are you?"
            base2::greet();  //will print "kem cho?"
        }

};

int main()
{
    derived x;
    x.greet();
    return 0;
}