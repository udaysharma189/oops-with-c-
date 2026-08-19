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
// #include <iostream>
// using namespace std;

// namespace first {
//     int a = 10;
// }

// namespace second {
//     double a = 10.5;
// }

// int main() {
//     string a = "C++";

//     cout << a << endl;
//     cout << second::a << endl;
//     cout << first::a << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// namespace First {
//     int a = 10;

//     void display() {
//         cout << "First namespace" << endl;
//         cout << "a = " << a << endl;
//     }
// }

// namespace Second {
//     int b = 20;

//     void show() {
//         cout << "Second namespace" << endl;
//         cout << "b = " << b << endl;
//     }
// }

// int main() {
//     cout << First::a << endl;
//     First::display();

//     cout << Second::b << endl;
//     Second::show();

//     return 0;
// }
#include <iostream>
namespace verylongnamespace{
    int a= 10;
} 
namespace vln = verylongnamespace;
int main(){
    std:: cout<<vln::a;
}