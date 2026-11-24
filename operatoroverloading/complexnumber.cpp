// wap to overload binary operator for a user defined the complex number
// using friend function
// #include <iostream>
// using namespace std;
// class Uday {
//     int a;
// public:
//     void getdata(int x) {
//         a = x;
//     }
//     void display() {
//         cout << a << endl;
//     }
//     friend Uday operator++(Uday &u, int);
// }
// Uday operator++(Uday &u, int) {
//     Uday e1;
//     e1.a = u.a++;
//     return e1;
// }
// int main() {
//     Uday U1, U2;
//     U1.getdata(5);
//     U1.display();
//     U2 = U1++;
//     U1.display();
//     U2.display();
//     return 0;
// }
 // ********** simple********

#include <iostream>
using namespace std;
class Complex {
    int real, img;
public:
    void getdata(int x, int y) {
        real = x;
        img = y;
    }
    void display() {
        cout << real << " + " << img << "i" << endl;
    }
    Complex operator+(Complex C) {
        Complex temp;
        temp.real = real + C.real;
        temp.img = img + C.img;
        return temp;
    }
};
int main() {
  Complex C1, C2, C3;
    C1.getdata(10, 20);
    C2.getdata(30, 40);
    C3 = C1 + C2;
    C3.display();
    return 0;
}// complex number operloading  
// complex no
