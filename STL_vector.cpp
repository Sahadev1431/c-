#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {1,2,3,4,5};
    // cout<<v[2];
    // for(vector<int>::iterator it = v.begin();it!=v.end();it++)
    // {
    //     cout<<*(it)<<" ";
    // }
    for(auto it = v.begin();it!=v.end();++it)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+1,v.end()-2);  //2 and 3 will be deleted
    for(auto it = v.begin();it!=v.end();++it)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    v.insert(v.begin(),100); // it will insert 100 to the begining
    v.insert(v.begin(),3,10); //it will insert 10 three times in the beginning
    for(auto it = v.begin();it!=v.end();++it)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    cout<<"the size of vector is "<<v.size();
    cout<<endl;

    v.pop_back(); // removes last element of vector
    for(auto it = v.begin();it!=v.end();++it)
    {
        cout<<*(it)<<" ";
    }

    cout<<endl;
    v.emplace_back(500); //same as push_back but it is a faster ways
    for(auto it = v.begin();it!=v.end();++it)
    {
        cout<<*(it)<<" ";
    }

    return 0;
}