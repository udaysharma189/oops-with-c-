#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    void getdata(int,int);
    void display();
    A operator+(A&);


};
void A::getdata(int x,int y){
    a=x;
    b=y;

}
void A::display()
{
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
}
A A::operator+(A&E1){
    A S;
    S.a=a+ E1.a;
    S.b=b+ E1.b;
    return S;
}



int main(){
    A A,B,C;
    A.getdata(10,20);
    A.display();
    B.getdata(100,200);
    B.display();
    C=A+B;   //it is a concept of overloading of binary operator using member function..
    
    C.display();


}