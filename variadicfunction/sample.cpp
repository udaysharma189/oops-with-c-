#include<iostream>
#include<cstdarg>
using namespace std;

void display(int size, ...) {
    int n;
    va_list args;
    va_start(args, size);

    for(int i = 0; i < size; i++) {
        n = va_arg(args, int);
        cout << n << endl;
    }

    va_end(args);
}

int main() {
    display(4, 10, 20, 30, 40);
}