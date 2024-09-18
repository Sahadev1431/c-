#include <iostream>
using namespace std;
typedef struct employee{
    int emp_id;
    char favchar;
    double salary;
}ep;
int main(){
    ep sahadev;
    ep  jiya;
    sahadev.emp_id = 1;
    sahadev.favchar = 'j';
    sahadev.salary = 13333333;
    jiya.emp_id = 2;
    jiya.favchar = 's';
    jiya.salary = 13333333;

    cout<<"the value of emp id of Sahadev is "<<sahadev.emp_id<<endl;
    cout<<"the value of favchar of Sahadev is "<<sahadev.favchar<<endl;
    cout<<"the value of salary of Sahadev is"<<sahadev.salary<<endl;
    cout<<"the value of emp id of jiya is "<<jiya.emp_id<<endl;
    cout<<"the value of favchar of jiya is "<<jiya.favchar<<endl;
    cout<<"the value of salary of jiya is"<<jiya.salary<<endl;
}