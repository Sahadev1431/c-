#include <iostream>
#include<string>
using namespace std;
class binary
{
    string s; //-->this is by default in private
public:
    void read();
    void check_bin();
    void once_compliment();
    void display();

};
void binary::read(){
    cout<<"enter a number:"<<endl;
    cin>>s;
}
void binary ::check_bin(){
    read();
    for (int i =0;i<s.length();i++){
        if (s.at(i)!='0' && s.at(i)!='1'){
            cout<<"invalid binary format";
            exit(0);
        }
    }
}
void binary :: once_compliment(){
    check_bin();
    for (int i=0;i<s.length();i++){
        if (s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void binary :: display(){
    once_compliment();
    for (int i = 0;i<s.length();i++){
        cout<<s.at(i);
    }
}

int main(){
    binary b;
    // b.read();
    // b.check_bin();
    // b.once_compliment(); //--> we can do like this but we have passed read() in check_bin,check_bin in once_com,once_com in display.this is nested memberfunction
    b.display();

}