#include<iostream>
using namespace std;

class example {
    int a, b;

public:
    example(int, int);
    void display();
};
example::example(int x, int y) {
    a = x;
    b = y;  
}
void example::display() {
    cout << "Sum = " << a + b << endl;

}
int main() {
    example e1(10, 20);
    e1.display();
    example e2=example(30, 40);
    e2.display();
}

   