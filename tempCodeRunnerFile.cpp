// #include <iostream>
// #include <memory>
// using namespace std;

// int main() {
//     unique_ptr<int> p(new int(10));
//     cout << *p << endl;
//     return 0; // memory automatically released
// }
// #include <iostream>
// #include <memory>
// using namespace std;

// int main() {
//     unique_ptr<int> p1(new int(100));
//     unique_ptr<int> p2 = move(p1);
//     if (p1 == nullptr)
//         cout << "p1 is empty" << endl;
//     cout << *p2 << endl;
//     return 0;
// }
// #include <iostream>
// #include <memory>
// using namespace std;

// class Student {
// public:
//     Student() {
//         cout << "Constructor Called" << endl;
//     }
//     ~Student() {
//         cout << "Destructor Called" << endl;
//     }
//     void display() {
//         cout << "Student Object" << endl;
//     }
// };
// int main() {
//     unique_ptr<Student> ptr = make_unique<Student>();
//     ptr->display();
//     return 0;
// }
#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor Called" << endl;
    }
    ~Student() {
        cout << "Destructor Called" << endl;
    }
    void display() {
        cout << "Student Object" << endl;
    }
};
int main() {
    unique_ptr<Student> ptr = make_unique<Student>();
    Student* rawGet = ptr.get();
    rawGet->display();
    ptr.reset(new Student());
    Student* rawRelease = ptr.release();
    if (ptr == nullptr) {
        cout << "ptr is now empty after release()" << endl;
    }
    delete rawRelease;

    return 0;
}