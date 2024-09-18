// // #include<iostream>
// // using namespace std;
// // int s = 143;
// // int main(){
// //     int s = 1432;
// //     cout<<"the value of local s is "<<s <<endl;
// //     cout<<"the value of global s is "<<::s<<endl;

// //     // float d = 34.4;
// //     // long double e =34.4;
// //     // cout<<"the value of d is"<<d<<endl<<"the value of e is "<<e;
// //     return 0;
// // }
// #include <iostream>
// using namespace std;
// // Abstract class
// class AbstractShape 
// {
// public:
//  // Pure virtual function 
//  virtual void draw() = 0;
 
//  void displayInfo() 
// {
//  cout << "Displaying information about the shape..." << endl;
//  }
// };
// class Circle : public AbstractShape 
// {
// public:
//  // Overriding pure virtual function 
//  void draw() override 
// {
//  cout << "Drawing a circle" << endl;
//  }
// };
// int main()
// {
// //  AbstractShape obj; //Error: Cannot instantiate an object of an 
//  Circle circleObj;
//  circleObj.draw(); // Output: "Drawing a circle"
//  circleObj.displayInfo(); // Output: "Displaying information about the 
//  return 0;
// }

#include <iostream>

class MyBaseClass {
public:
    virtual void display() {
        std::cout << "This is a virtual function in the base class." << std::endl;
    }
};

class MyDerivedClass : public MyBaseClass {
public:
    void display() override {
        std::cout << "This is the overridden function in the derived class." << std::endl;
    }
};

int main() {
    MyBaseClass* obj = new MyDerivedClass();
    obj->display(); // Late binding for a virtual function
    delete obj;
    return 0;
}
