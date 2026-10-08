#include <iostream>
using namespace std;

class Number {
    int a, b;

public:
    void getData(int, int);
    void showData();

    friend void findMax(Number);
};

// Method outside class
void Number::getData(int x, int y)
{
    a = x;
    b = y;
}

void Number::showData()
{
    cout << "First number = " << a << endl;
    cout << "Second number = " << b << endl;
}

// Friend function
void findMax(Number n)
{
    if (n.a > n.b)
        cout << "Maximum = " << n.a << endl;
    else
        cout << "Maximum = " << n.b << endl;
}

int main()
{
    Number n;

    n.getData(20, 35);
    n.showData();

    findMax(n);

    return 0;
}