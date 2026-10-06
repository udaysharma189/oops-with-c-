#include <iostream>
using namespace std;

// class Item {
// public:
//     static int count;
// };

// int Item::count = 10;

// int main() {
//     cout << Item::count;
// }
class item{
    static int count;
    public:
    static void show();
};
 int item::count;
void item::show(){
    cout<<count;
}
int main(){
    item::show();
    return 0;
}