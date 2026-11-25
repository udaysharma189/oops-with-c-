#include <iostream>
using namespace std;

class Student {
public:
    int rollno;

    Student(int r) {
        rollno = r;
    }

    void display() {
        cout << "Roll No: " << rollno << endl;
    }
};

int main() {
    Student *ptr = new Student(101);

    ptr->display();

    delete ptr;

    return 0;
}