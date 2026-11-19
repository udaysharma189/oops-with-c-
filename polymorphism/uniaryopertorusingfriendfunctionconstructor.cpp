
#include <iostream>
using namespace std;

class Example {
    int a;

public:
    // Parameterized constructor
    Example(int x) {
        a = x;
    }

    void display() {
        cout << "a = " << a << endl;
    }

    // Friend function declaration
    friend void operator-(Example);
};

// Friend function definition
void operator-(Example E) {
    E.a = -E.a;
}

int main() {
    Example E(10);

    cout << "Before overloading:" << endl;
    E.display();

    -E;

    cout << "After overloading:" << endl;
    E.display();

    return 0;
}
