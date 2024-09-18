// #include <iostream>
// using namespace std;

// class number{
//     int n;
//     public:
//     void get_data();
//     void put_data();

// };
// void number::get_data(){
//     cout<<"enter a number till you want to print:";
//     cin>>n;
// }
// void number::put_data(){
//     for (int i =1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }

// int main(){
//     number one_to_n;
//     one_to_n.get_data();
//     one_to_n.put_data();
// }

#include <iostream>
using namespace std;

class X
{
public:
   static int count;
};
int X::count = 10;                // define static data member

int main ()
{
//    int X = 0;                     // hides class type X
   cout << X::count << endl;      // use static member of class X
}