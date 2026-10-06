#include<iostream>
using namespace std;
class Example
{
    int a,b;
public:
    void getdata(int,int);
    void display();
    Example sum(Example&);
};
void Example::getdata(int x, int y)
{
    a=x;
    b=y;
}
void Example::display()
{
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
Example Example::sum(Example &E)
{
    Example S;
    S.a=a+E.a;
    S.b=b+E.b;
    return S;
}
int main()
{
    Example E1,E2,E3;
    E1.getdata(10,20);
    E1.display();
    E2.getdata(100,200);
    E2.display();
    E3=E1.sum(E2);
    E3.display();
    return 0;
}
// we can not overload sizeof, typeid, scope resolution (::), and member access (.) operators.
//syntax return type class_name::function_name or operator op (arguments){ body of function }