#include <iostream>
using namespace std;

class Example {
    int a;

public:
    void getdata(int x) {
        a = x;
    }

    void display() {
        cout << a << endl;
    }

    Example operator++(int) {
        Example e1;
        e1.a = a++;
        return e1;
    }
};

int main() {
    Example E1, E2;

    E1.getdata(5);
    E1.display();

    E2 = E1++;

    E1.display();
    E2.display();

    return 0;
}