#include<iostream>
using namespace std;
class time{
    int h,m;
    public:
    int getdata();
    int putdata();
    int sum(time t1,time t2);
};
int time::getdata(){
    cout<<"enter hour:"<<endl;
    cin>>h;
    cout<<"enter minute:"<<endl;
    cin>>m;
}
int time::putdata(){
    cout<<"hour is "<<h<<endl;
    cout<<"minute is "<<m<<endl;
    cout<<"its looking hard but not so hard and I am gonna top in this sessional 1 after that in sessional 2, I will also top at that time.and you already know I am gonna top in university exam.At the end of the year I will get highest package in history of Rollwala.Thanks.Greatful";
}
int time::sum(time t1,time t2){
    h = (t1.m+t2.m)/60;
    m = (t1.m+t2.m)%60;
    h = h + (t1.h+t2.h); //-->this is object inside the function,
}

int main(){
    time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.sum(t1,t2);
    // t1.putdata();
    // t2.putdata();
    t3.putdata();
    return 0;
}