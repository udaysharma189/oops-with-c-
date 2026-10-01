#include <iostream>
using namespace std;

class Example {
    int a, b;

public:
    Example();
    Example(int, int);
    void display();
    Example sum(Example&);
};
Example::Example() {
    a = 0;
    b = 0;
}
Example::Example(int x, int y) {
    a = x;
    b = y;
}
void Example::display() {
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}
Example Example::sum(Example &E) {
    Example S;
    S.a = a + E.a;
    S.b = b + E.b;
    return S;
}
    int main() {
    Example E1,E2;
    E1 = Example(10, 20);
    E1.display();
    E2 = Example(100, 200);
    E2.display();
    Example E3;
    E3 = E1.sum(E2);
    E3.display();

    return 0;
    }