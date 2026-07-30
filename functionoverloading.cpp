#include<iostream>
using namespace std;

void sum();
int sum(int, int);
float sum(int, float, int);
int main() {
    int a, b, r1;
    float c, r2;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    sum();
    r1 = sum(a, b);
    cout << "Sum function 2: " << r1 << endl;
    r2 = sum(a, c, b);
    cout << "Sum function 3: " << r2 << endl;

}
void sum() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum function 1: " << a + b << endl;
}
int sum(int a, int b) {
    return a + b;
}
float sum(int x, float y, int z) {
    return x + y + z;
}