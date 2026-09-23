#include<iostream>
using namespace std;
class Test; 

class Example{
    int a;
    public:
        Example(int);
        void displayA();
        void sum(Example, Test);
};

class Test{
    int b;
    public:
        Test(int);
        void displayB();
        friend void Example :: sum(Example, Test);
};

Example::Example(int x){
    a = x;
}

void Example::displayA(){
    cout << a << endl;
}

Test::Test(int y){
    b = y;
}

void Test::displayB(){
    cout << b << endl;
}

void Example :: sum(Example E1, Test T1){
    int s = E1.a + T1.b;
    cout << s << endl;
}

int main(){

    Example E1(10);
    E1.displayA();

    Test T1(20);
    T1.displayB();

    E1.sum(E1, T1);

    return 0;
}
// class to another class function calling is also a example of friend function.