#include <iostream>
using namespace std;

class Item {
public:
    static int count;
};

int Item::count = 10;

int main() {
    cout << Item::count;
}