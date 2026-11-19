#include <iostream>
using namespace std;

class Example {
    int a, b;

public:
    void getdata(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << a << " and " << b << "\n";
    }

    friend Example operator+(Example &, Example &);
};

Example operator+(Example &e1, Example &e2) {
    Example E;

    E.a = e1.a + e2.a;
    E.b = e1.b + e2.b;

    return E;
}
int main() {
    Example E1, E2, E3;
    E1.getdata(10, 20);
    E1.display();
    E2.getdata(100, 200);
    E2.display();
    E3 = E1 + E2;
    E3.display();
   return 0;
}