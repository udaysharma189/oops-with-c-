#include <bits/stdc++.h>
using namespace std;

class example {
    int a, b;

public:
    void geta(int, int);
    int sumA(example, example);
    int sumB(example, example);
};

void example::geta(int a1, int b1) {
    a = a1;
    b = b1;
}

int example::sumA(example A, example B) {
    int s = A.a + B.a;
    return s;
}

int example::sumB(example A, example B) {
    int t = A.b + B.b;
    return t;
}

int main() {
    example E1, E2, E3;

    E1.geta(10, 15);
    E2.geta(20, 25);

    int r = E3.sumA(E1, E2); 
    int s = E3.sumB(E1, E2);  

    cout << r << endl;
    cout << s << endl;

    return 0;
}