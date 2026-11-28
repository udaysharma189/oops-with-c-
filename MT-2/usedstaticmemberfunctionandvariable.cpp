
#include <iostream>
#include <string>
using namespace std;

class Uday {
    int roll;
    string name;
    static int count;

public:
    void display();
    Uday(int, string);
    static void displaycount();
};

// Static variable definition
int Uday::count = 0;

void Uday::display() {
    cout << roll << endl;
    cout << name << endl;
}

// Constructor
Uday::Uday(int a, string b) {
    roll = a;
    name = b;
    count++;
}

// Static member function
void Uday::displaycount() {
    cout << "Total Objects: " << count << endl;
}

int main() {
    Uday U1(3, "Uday Sharma");
    U1.display();

    Uday U2(4, "Happy");
    U2.display();

    Uday::displaycount();

    return 0;
}// used static member
