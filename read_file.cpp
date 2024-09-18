#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s;
    ifstream xyz("sample2.txt");
    getline(xyz,s);
    cout<<s;
    return 0;
}