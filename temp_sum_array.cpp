#include <iostream>
using namespace std;

template <class t>

t sum(t a[],int size)
{
    t sum = 0;
    for(int i = 0;i<size;++i)
    {
        sum = sum+a[i];
    }
    return sum;
}

int main()
{
    int arr1[5]={3,4,6,4,7};
    float arr2[3] = {1.1,2.2,3.5};
    cout<<"Integer array sum is "<<sum(arr1,5)<<endl;
    cout<<"Float array sum is "<<sum(arr2,5);
    return 0;
}