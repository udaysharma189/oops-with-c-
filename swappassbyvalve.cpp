#include <iostream>
using namespace std;

void swapNum(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside function: a = " << a << ", b = " << b << endl;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swapNum(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}