#include <iostream>
using namespace std;

class Student {
public:
    int rollno;

    void display();
};

void Student::display() {
    cout << "Roll No: " << rollno << endl;
}

int main() {
    Student *ptr = new Student;

    ptr->rollno = 101;
    ptr->display();

    delete ptr;

    return 0;
}