// #include <iostream>

// namespace Stant {
//     void display() {
//         std::cout << "I am in display function of Stant namespace";
//     }
// }

// int main() {
//     Stant::display();

//     return 0;
// }
#include <iostream>
using namespace std;

namespace first {
    int a = 10;
}

namespace second {
    double a = 10.5;
}

int main() {
    string a = "C++";

    cout << a << endl;
    cout << second::a << endl;
    cout << first::a << endl;

    return 0;
}