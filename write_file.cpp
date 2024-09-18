#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s = "love you soo muchhhhh my jiyada";
    ofstream love("sample.txt");
    love<<s;
    return 0;
}