
#include <iostream>
using namespace std;
class Example {
    int a;
public:
    Example(int x) {
        a = x;
    }
    void display() {
        cout << "a = " << a << endl;
    }
    friend void operator-(Example);
};
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
