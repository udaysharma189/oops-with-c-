#include <iostream>
using namespace std;

class A {
    int a, b;
public:
    void getData(int, int);
    void showData();

    friend void findMax(A);
};
void A::getData(int x, int y)
{
    a = x;
    b = y;
}
void A::showData()
{
    cout << "First number = " << a << endl;
    cout << "Second number = " << b << endl;
}
void findMax(A n)
{
    if (n.a > n.b)
        cout << "Maximum = " << n.a << endl;
    else
        cout << "Maximum = " << n.b << endl;
}

int main()
{
    A n;

    n.getData(20, 35);
    n.showData();
   findMax(n);
    return 0;
}