
#include <iostream>
using namespace std;

class Example {
    int a;

public:
    // Parameterized constructor
    Example(int x) {
        a = x;
    }

    // Display function
    void display() {
        cout << "a = " << a << endl;
    }

    // Unary minus operator overloading
    void operator-() {
        a = -a;
    }
};

int main() {
    Example E(10);

    cout << "Before overloading:" << endl;
    E.display();

    -E;  // Calling overloaded unary minus operator

    cout << "After overloading:" << endl;
    E.display();

    return 0;
}
