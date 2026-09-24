#include<iostream>
using namespace std;
class Test;
class Example{
        int a;
        public:
            Example(int);
            void displayA();
            friend void sum(Example, Test);
};
class Test{
        int b;
        public:
           Test(int);
           void displayB();
           friend void sum(Example, Test);
};

Example::Example(int x) {
       a = x;
}
void Example::displayA() {
    cout<<a<<endl;
}
Test::Test(int y) {
    b = y;
}
void Test::displayB(){
    cout<<b<<endl;
}
void sum(Example E1, Test T1) {
    int S = E1.a +T1.b;
    cout<<S;
}
int main() {
    Example E1(10);  //implicite
    E1.displayA();
    Test T1 = Test(20);  //explicite 
    T1.displayB();
    sum(E1,T1);
}