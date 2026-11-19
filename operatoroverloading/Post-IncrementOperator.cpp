#include <iostream>
using namespace std;
class Uday {
    int a;
public:
    void getdata(int x) {
        a = x;
    }
    void display() {
        cout << a << endl;
    }
    Uday operator++(int) {
        Uday e1;
        e1.a = a++;
        return e1;
      }
};
int main() {
    Uday U1, U2;
    U1.getdata(5);
    U1.display();
    U2 = U1++;
    U1.display();
    U2.display();
    return 0;
}