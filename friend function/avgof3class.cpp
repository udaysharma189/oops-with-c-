#include <iostream>
using namespace std;
class A;
class B;
class C{
    int a;
    public:
    void geta(int x);
    void show();
    friend void avg(A,B,C);
};
class A{
    int b;
    public:
    void getb(int y);
    void show();
    friend void avg(A,B,C);
};
class B{
    int c;
    public:
    void getc(int z);
    void show();
    friend void avg(A,B,C);
};
void C::geta(int x){
    a=x;
}
void A::getb(int y){
    b=y;
}
void B::getc(int z){
    c=z;
}
void C::show(){
    cout<<"The value of a is: " << a << endl;
}
void A::show(){
    cout<<"The value of b is: " << b << endl;
}
void B::show(){
    cout<<"The value of c is: " << c << endl;
}
void avg(A x, B y, C z){
    float average = (x.b + y.c + z.a)/3.0;
    cout<<"The average of a, b and c is: " << average << endl;
}
int main(){
    A a;
    B b;
    C c;
    a.getb(5);
    b.getc(10);
    c.geta(15);
    a.show();
    b.show();
    c.show();
    avg(a,b,c);
    return 0;
}