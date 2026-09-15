#include <iostream>
using namespace std;

class Example {
    int a, b;

public:
    void getab(int, int);
    void display();

    friend void average(Example);
};

void Example::getab(int x, int y) {
    a = x;
    b = y;
}

void Example::display() {
    cout << "a = " << a << " b = " << b << endl;
}

void average(Example e) {
    cout << "Average = " << (e.a + e.b) / 2 << endl;
}

int main() {
    Example e;

    e.getab(10, 20);
    e.display();
    average(e);

    return 0;
}