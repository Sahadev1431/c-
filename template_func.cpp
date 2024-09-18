#include <iostream>
using namespace std;

template <typename t>
t sum(t a,t b)
{
    return a+b;
}

int main()
{
    cout<<"integer sum is "<<sum<int>(5,9);
    cout<<"float sum is "<<sum<float>(11.4,2.2); //this is template for same data type we cant give one float and one int we can pass parameter 11
    return 0;
}



// #include <iostream>
// using namespace std;

// template <class t1,class t2>
// float sum(t1 a,t2 b)
// {
//     return a+b;
// }

// int main()
// {
//     cout<<"integer sum is "<<sum(5,9)<<endl;
//     cout<<"float sum is "<<sum(11,2.2);    //this is template for diff datatype .we cant use int as well as float,double also.
//     return 0;
// }