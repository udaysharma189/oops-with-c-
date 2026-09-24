#include<iostream>
using namespace std;

class Swap {
    int a, b;

public:
    Swap(int x, int y) {
        a = x;
        b = y;

        int temp = a;
        a = b;
        b = temp;
    }

    void display() {
        cout << "After swapping:" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    Swap obj(10, 20);
    obj.display();

    return 0;
}