#include <iostream>
using namespace std;
class Example {
    int a;
    public:
    void geta(int);
    friend Example Sum(Example, Example);
    void display(Example);
};
void Example::geta(int x) {
    a = x;
}
Example Sum(Example E1, Example E2) {
    Example S;
    S.a = E1.a + E2.a;
    return S;
}
void Example::display(Example E) {
    cout << "Sum of a: " << E.a << endl;
}
int main() {
    Example A,B,C;
    A.geta(5);
    B.geta(10);
    C = Sum(A, B);
    C.display(C);
    return 0;
}