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
    friend Uday operator++(Uday &u);
};
Uday operator++(Uday &u) {
    Uday u1;
    u1.a = ++u.a;
    return u1;
}
int main() {
    Uday A1, A2;
    A1.getdata(10);
    cout<<"Before increment"<<" "<<endl;
    A1.display();
    A2.display();
    A2 = ++A1;
    cout<<"After increment"<<" "<<endl;
    A1.display();
    A2.display();
    return 0;
}
