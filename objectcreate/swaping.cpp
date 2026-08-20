#include <iostream>
using namespace std;

class Example {
    int a, b;

public:
    void get(int x, int y) {
        a = x;
        b = y;
    }

    void show() {
        cout << "a = " << a << ", b = " << b << endl;
    }

    void swapObject(Example &E) {
        swap(a, E.a);
        swap(b, E.b);
    }
};

int main() {
    Example E1, E2;

    E1.get(10, 20);
    E2.get(30, 40);

    cout << "Before Swap:" << endl;
    E1.show();
    E2.show();

    E1.swapObject(E2);

    cout << "After Swap:" << endl;
    E1.show();
    E2.show();

    return 0;
}