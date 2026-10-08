#include<iostream>
#include<cstdarg>
using namespace std;

void display(int size, ...) {// function defination
    int n;
    va_list args;
    va_start(args, size);// initialize the argument list

    for(int i = 0; i < size; i++) {
        n = va_arg(args, int);
        cout << n << endl;
    }

    va_end(args);// clean up the argument list
}

int main() {
    display(4, 10, 20, 30, 40);
}