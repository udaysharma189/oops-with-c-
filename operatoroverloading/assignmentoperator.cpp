#include <iostream>
using namespace std;
class A {
    int a, b;
public:
    A(int x, int y) {
        a = x;
        b = y;
    }
    A operator=(A E) {
        a = E.a;
        b = E.b;
        return E;
    }
    void display() {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};
int main() {
    A E1(10, 20);
    A E2(0, 0);
    E2 = E1;
    E2.display();
  return 0;
}