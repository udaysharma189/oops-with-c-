#include <iostream>
using namespace std;

class test;   // Forward declaration

class Example
{
    int a;

public:
    void geta(int);
    void Adisplay();

    friend int sum(Example, test);
};

void Example::geta(int x)
{
    a = x;
}

void Example::Adisplay()
{
    cout << "The value of a is: " << a << endl;
}

class test
{
    int b;

public:
    void getb(int);
    void Bdisplay();

    friend int sum(Example, test);
};

void test::getb(int y)
{
    b = y;
}

void test::Bdisplay()
{
    cout << "The value of b is: " << b << endl;
}

// Friend function
int sum(Example e, test t)
{
    return e.a + t.b;
}

int main()
{
    Example e;
    test t;

    e.geta(10);
    t.getb(20);

    e.Adisplay();
    t.Bdisplay();

    cout << "The sum of a and b is: " << sum(e, t) << endl;

    return 0;
}