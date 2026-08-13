#include <iostream>
using namespace std;

class example
{
private:
    int a, b, c, d, e;

public:
    void getdata(int, int, int, int, int);
    int add();
};

void example::getdata(int x1, int x2, int x3, int x4, int x5)
{
    a = x1;
    b = x2;
    c = x3;
    d = x4;
    e = x5;
}

int example::add()
{
    return a + b + c + d + e;
}

int main()
{
    int n1, n2, n3, n4, n5;

    cout << "Enter 5 numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    example E;
    E.getdata(n1, n2, n3, n4, n5);

    cout << "Sum = " << E.add() << endl;

    return 0;
}