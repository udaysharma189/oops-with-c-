#include <iostream>
using namespace std;

class A {
    int a, b;

public:
   A(int,int); 
   void display();
   A operator+(A&);
};


A::A(int x,int y){
    a=x;
    b=y;

}

void A::display() {
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
}

A A::operator+(A& E1) {
    A S(a + E1.a, b + E1.b);                       // parametrised  constructor called
    
    return S;
}
int main() {

    A A1(10, 20);       // Parameterized constructor
    A B1(100, 200);     // Parameterized constructor

    A1.display();
    B1.display();

    A C = A1+B1;         // Copying A object  //A1 is the calling object and B1 is passed as a argument...
    // C is the third object //A is the class name 
           
    C.display();

    return 0;
}