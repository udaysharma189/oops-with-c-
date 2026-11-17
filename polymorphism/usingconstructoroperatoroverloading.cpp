
#include<iostream>
using namespace std;

class Example
{
    int a,b;

public:
    Example(int x, int y)
    {
        a=x;
        b=y;
    }

    void display();

    Example sum(Example&);
};

void Example::display()
{
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

Example Example::sum(Example &E)
{
    Example S(0,0);

    S.a=a+E.a;
    S.b=b+E.b;

    return S;
}

int main()
{
    Example E1(10,20), E2(100,200), E3(0,0);

    E1.display();
    E2.display();

    E3=E1.sum(E2);

    E3.display();

    return 0;
}
