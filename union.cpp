#include<iostream>
using namespace std;
typedef union money{
    int rice;
    char fav_person;
    int rupees;
} mn;

int main(){
    // union money m1;
    mn m1;
    m1.rice = 200;
    m1.fav_person ='j';
    cout<<m1.fav_person<<endl;
}