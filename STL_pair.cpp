#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // pair<int ,float> p ={1,4.53};
    // cout<<p.first<<endl; 
    // cout<<p.second<<endl; 

    // pair<int , pair<int ,float>>p = {4,{6,5.5}};
    // cout<<p.first<<endl;
    // cout<<p.second.first<<endl;
    // cout<<p.second.second;

    pair<int ,int>arr[]= {{1,2},{3,4},{5,6}};
    cout<<(arr[1].second+arr[2].first);  //4+5
    return 0;
    
}