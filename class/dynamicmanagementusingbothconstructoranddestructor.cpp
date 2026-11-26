#include <iostream>
using namespace std;
class Student {
public:
    int rollno;
    // Constructor
    Student(int r) {
        rollno = r;
        cout << "Constructor called" << endl;
    }
    // Display function
    void display() {
        cout << "Roll No: " << rollno << endl;
    }
    // Destructor
  ~Student() {
        cout << "Destructor called" << endl;
    }
};
int main() {
    Student *ptr = new Student(101);
    ptr->display();
delete ptr;
    return 0;
}

