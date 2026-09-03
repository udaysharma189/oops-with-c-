#include<iostream>
#include<cstdarg>
using namespace std;

void display(int size, ...) {
    int n;
    int count = 0;

    va_list args;
    va_start(args, size);

    for(int i = 0; i < size; i++) {
        n = va_arg(args, int);
        cout << n << endl;
        count += n;
    }

    cout << "Sum = " << count << endl;

    va_end(args);
}

int main() {
    display(5, 10, 20, 30, 40, 50);
}