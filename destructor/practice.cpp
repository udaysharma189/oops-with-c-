#include <iostream>
using namespace std;
class Example
{
    int a, b;
public:
    Example(int, int);
    void display();
    ~Example();
};
// constructor definition ouside the class
Example::Example(int x, int y)
{
    a = x;
    b = y;
}
void Example::display()
{
    cout << "a = " << a << ", b = " << b << endl;
}
Example::~Example()
{
    cout << "object deleted" << endl;
}
int main(){
    Example e1(100, 120);// implicit call to constructor
    e1.display();
    return 0;
}