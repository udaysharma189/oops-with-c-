#include <iostream>
using namespace std;

class Example
{
public:
    int a;

    void getA()
    {
        a = 10;
    }
};

class Test
{
public:
    int b;

    void getB()
    {
        b = 20;
    }
};

int main()
{
    Example E;
    Test T;

    E.getA();
    T.getB();

    cout << E.a + T.b;

    return 0;
}