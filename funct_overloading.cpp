#include<iostream>
using namespace std;
//cube
int volume (int a){
    return (a*a*a);
}
//cuboid
int volume(int l,int b,int h){
    return (l*b*h);
}
//cylinder
float volume(int r,int h){  //if there is int volume(int r,int h) then out put will not 301.44 it will be 301 
    return (3.14*r*r*h);
}

int main(){
    cout<<"the volume of cube is "<<volume(4)<<endl;
    cout<<"the volume of cuboid is "<<volume(4,10,6)<<endl;
    cout<<"the volume of cylinder is "<<volume(4,6)<<endl;
    return 0;
}