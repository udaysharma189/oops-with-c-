#include <iostream>
using namespace std;
class example
{
private:
    int a,b;
public:
 void getdata(){
    cout<<"enter a two numbers"<<endl;
    cin>>a>>b;
 }
 void print(){
    cout<< a << b;
 }
};
int main(){
    example E;
    // . -> member access oprator,can never be overloading.
    // :: -> scope resolution operator(double colon).
    E.getdata();
    E.print();
    return 0;
}
int x = 20;
int main (){
    int x= 10;
    cout<<x;
    cout<<::x; //now print 20;
}
//code :-
// class example
// {
// private:
//     int a,b;
// public:
//     void getdata();
//     void print();
// };
// void example::getdata()
// {
//     cout<<" enter the data ";
//     cin>>a>>b;
// }
// void example::print(){
//     cout<<a<<b<<"\n";
// }
// int main (){
//     example e;
//     e.getdata();
//     e.print();
//     return 0;
// }
