#include <iostream>
using namespace std;

class Complex {
    private :
        int real,imag;

    public :
        Complex() {
            real = 0;
            imag = 0;
        }
        Complex(int r, int i) {
            real = r;
            imag = i;
        }

        Complex operator + (Complex obj) {
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res; 
        }

        void print() {
            cout << real << " + " <<imag << "i";
        }
};

int main() {
    Complex c1 (3,6);
    Complex c2 (2,3);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}