#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void geta(int );
    void showa();
    friend class B;
    void displayB(B);
};
class B{
    int b;
    public:
    void getb(int );
    void showb();
    void displayA(A);
    friend class A;
};
void A::geta(int x){
    a=x;
}
void A::showa(){
    cout<<"Value of a is: "<<a<<endl;
}
void B::getb(int x){
    b=x;
}
void B::showb(){
    cout<<"Value of b is: "<<b<<endl;
}
void A::displayB(B B1){
    cout<<"Value of b is: "<<B1.b<<endl;
}
void B::displayA(A A1){
    cout<<"Value of a is: "<<A1.a<<endl;
}
int main(){
    A obj1;
    obj1.geta(10);
    obj1.showa();
    B obj2;
    obj2.getb(20);
    obj2.showb();
    obj1.displayB(obj2);
    obj2.displayA(obj1);
    return 0;
}