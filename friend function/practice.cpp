#include <iostream>
using namespace std;

class A
{
    string name;
    int amount;

public:
    void getData()
    {
        cin >> name >> amount;
    }

    friend void check(A);
};
void check(A p)
{
    if (p.amount > 100000)
        cout << p.name << "You are eligible" << endl;
    else
        cout << p.name << " You are not eligible" << endl;
}

int main()
{
    A ram, shyam, amit;
    ram.getData();
    shyam.getData();
    amit.getData();
    check(ram);
    check(shyam);
    check(amit);
    return 0;
}