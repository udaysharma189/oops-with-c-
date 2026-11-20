#include <iostream>
using namespace std;
class Uday{
    int a;
public:
    void getdata(int x) {
        a = x;
    }
    void display() {
        cout << a << endl;
    }
    Uday operator++() {
        Uday u1;
        u1.a = ++a;
        return u1;
    }
};
int main() {
    Uday A1, A2;
    A1.getdata(10);
    A1.display();
    A2 = ++A1;
   A1.display();
    A2.display();
    return 0;
}