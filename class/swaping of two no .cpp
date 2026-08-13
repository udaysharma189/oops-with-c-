#include <iostream>
using namespace std;

class example
{
private:
    int a, b;

public:
    void getdata(int, int);
    void sum();
};

void example::getdata(int x, int y)
{
    a = x;
    b = y;
}

void example::sum()
{
    swap(a, b);
    cout << "After swapping: " << a << " " << b << endl;
}

int main()
{
    int a1, b1;

    cout << "Enter the numbers: ";
    cin >> a1 >> b1;

    example E;

    E.getdata(a1, b1);
    E.sum();

    return 0;
}