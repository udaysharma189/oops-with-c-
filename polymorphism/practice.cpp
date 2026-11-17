
#include <iostream>
using namespace std;

class Example {
    int a, b;

public:
    Example();
    Example(int, int);
    void display();
    Example sum(Example, Example);
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

Example Example::sum(Example E1, Example E2) {
    Example S;
    S.a = E1.a + E2.a;
    S.b = E1.b + E2.b;
    return S;
}

int main() {
    Example E1, E2;

    E1 = Example(10, 20);
    E2 = Example(10, 20);

    E1.display();
    E2.display();

    Example E3;
    Example E4 = E3.sum(E1, E2);

    E4.display();

    return 0;
}
