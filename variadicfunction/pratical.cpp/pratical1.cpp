#include <iostream>
using namespace std;
class ClassB; 
class ClassA {
        int num1;
public:
    void input(int a) {
        num1 = a;
    }
    friend void compare(ClassA, ClassB);
};
class ClassB {
    int num2;
public:
    void input(int b) {
        num2 = b;
    }
    friend void compare(ClassA, ClassB);
};
void compare(ClassA obj1, ClassB obj2) {
    if (obj1.num1 > obj2.num2) {
        cout << "Object of ClassA is greater";
    }
    else if (obj1.num1 < obj2.num2) {
        cout << "Object of ClassB is greater";
    }
    else {
        cout << "Both objects are equal";
    }
}
int main() {
    ClassA obj1;
    ClassB obj2;
    obj1.input(20);
    obj2.input(10);
    compare(obj1, obj2);
    return 0;
}