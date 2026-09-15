#include<iostream>
using namespace std;
class B;    
class A{
    int a;
    public:
    void geta(int );
    friend class B;
};
class B{
    public:
    void getb(int );
    void display(A);
};
void A::geta(int x){
    a=x;
}
void B::display(A A1){
    cout<<"Value of a is: "<<A1.a;
}   int main(){
    A obj1;
    obj1.geta(10);
    B obj2;
    obj2.display(obj1);
    return 0;
}