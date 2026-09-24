// other class member making friend to another class using constructor
#include <iostream>
using namespace std;

class Test; 

class Example {
    int a;

public:
    Example(int x) {
        a = x;
    }

    void displayA() {
        cout << "A = " << a << endl;
    }

    friend class Test;
};

class Test {
    int b;

public:
    Test(int y) {
        b = y;
    }

    void displayB() {
        cout << "B = " << b << endl;
    }

    void sum(Example E1) {
        cout << "Sum = " << E1.a + b << endl;
    }
};

int main() {
    Example E1(10);     
    E1.displayA();

    Test T1(20);          
    T1.displayB();

    T1.sum(E1);

    return 0;
}