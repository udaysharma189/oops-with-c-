#include <iostream>
using namespace std;

class example
{
private:
    int year;

public:
    void getdata(int);
    void check();
};

void example::getdata(int y)
{
    year = y;
}

void example::check()
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        cout << "Leap Year" << endl;
    else
        cout << "Not a Leap Year" << endl;
}

int main()
{
    int y;

    cout << "Enter the year: ";
    cin >> y;

    example E;

    E.getdata(y);
    E.check();

    return 0;
}