#include<iostream>
using namespace std;

class Add {
    int a, b;

public:
    Add(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "Sum = " << a + b;
    }
};

int main() {
    Add obj(10, 20);
    obj.display();

    return 0;
}