// #include <iostream>
// using namespace std;

// class Example {
//     int a, b;

// public:
//     void getab(int, int);
//     void display();

//     friend void swap(Example);
// };

// void Example::getab(int x, int y) {
//     a = x;
//     b = y;
// }

// void Example::display() {
//     cout << "a = " << a << " b = " << b << endl;
// }

// void swap(Example e) {
//     int temp;

//     temp = e.a;
//     e.a = e.b;
//     e.b = temp;

//     cout << "After swapping: ";
//     cout << "a = " << e.a << " b = " << e.b << endl;
// }

// int main() {
//     Example e;

//     e.getab(10, 20);

//     cout << "Before swapping: ";
//     e.display();

//     swap(e);

//     return 0;
// }
//m-2
#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void geta(int );
    friend void swap(A,B);
};
class B{
    int b;
    public:
    void getb(int );
    friend void swap(A,B);
};
void A::geta(int x){
    a=x;
}
void B::getb(int y){
    b=y;
}
void swap(A A1,B B1){
    int t;
    t=A1.a;
    A1.a=B1.b;
    B1.b=t;
    cout<<"After swapping: ";
    cout<<"a="<<A1.a<<" b="<<B1.b<<endl;
}
int main(){
    A A1;
    B B1;
    A1.geta(10);
    B1.getb(20);
    swap(A1,B1);
    return 0;
}