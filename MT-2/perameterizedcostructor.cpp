#include <iostream>
using namespace std;
class A{
    int a,b;
    public:
     A(int , int);
     void display(){
        cout<< a<<" "<<b<<endl;
     }
};
 A::A(int x , int y){
    a=x;
    b=y;
 }
 int main(){
    // A A1(10,20); inplicite approch 
    A A1 = A(10,20);// explicite approach
    A1.display();


 }