#include <iostream>
#include <fstream>
#include <String>
using namespace std;

int main()
{
    ofstream send;
    string s;
    send.open("sample.txt");
    cout<<"enter a string: ";
    getline(cin,s);
    send<<s;
    send.close();

    ifstream recieve;
    string j;
    recieve.open("sample.txt");

    while(recieve.eof() == 0)
    {
        getline(recieve,j);
        cout<<j<<endl;
    }
    // getline(recieve,j);
    
}