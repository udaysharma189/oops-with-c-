#include <iostream>
using namespace std;
class Example{
    static int count;
public:
    Example()
    {
        count++;
        cout << "The number of objects created: " << count << endl;
    }
    ~Example()
    {
        cout << "The number of objects destroyed: " << count << endl;
        count--;
    }
};
int Example::count; // Initialize static member variable
int main(){
    Example e1; // count = 1
    Example e2;
    Example e3; // count = 2

    return 0;
}