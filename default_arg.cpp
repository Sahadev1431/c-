// #include<iostream>
// using namespace std;
// float interest(int p,float r=3,int t){
//     int si = (p*r*t)/100;
//     return si;
// }
// int main(){
//     int pri,time;
//     float rate,result;
//     pri = 100000;
//     time = 2;
//     // rate = 2;
//     result = interest(pri,rate,time);
//     cout<<"the interst is "<<result<<endl;
//     return 0;
// }

#include<iostream>
float recievemoney(int curmoney,float factor=1.04){
    return curmoney*factor;
}
using namespace std;
int main(){
   int money = 100000;
    cout<<"if you have "<<money<<" you will recieve "<<recievemoney(money)<<" after 1 year"<<endl;
    cout<<"for vip:if money "<<money<<" will recieve "<<recievemoney(money,1.06)<<" after a year";

    return 0;
}