#include<iostream>
using namespace std;

class Test
{
    int a;

public:
    Test()
    {
        a = 10;
    }

    Test(int x)
    {
        a = x;
    }

    void display()
    {
        cout << "Value = " << a << endl;
    }
    ~Test()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Test t1;      
    Test t2(20); 

    t1.display();
    t2.display();

    return 0;
}