#include <iostream>
using namespace std;

class example
{
private:
    int n;

public:
    void getdata(int);
    void check();
};

void example::getdata(int x)
{
    n = x;
}

void example::check()
{
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            cout << "Not Prime";
            return;
        }
    }

    cout << "Prime";
}

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    example E;

    E.getdata(n);
    E.check();

    return 0;
}