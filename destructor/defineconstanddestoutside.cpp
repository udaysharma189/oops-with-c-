// constructor and destructor outside class definition
#include <iostream>
using namespace std;

class B {
public:
    B();
    ~B();
};

B::B() {
    cout << "Constructor called" << endl;
}

B::~B() {
    cout << "Destructor called" << endl;
}

int main() {
    B B1;
    return 0;
}