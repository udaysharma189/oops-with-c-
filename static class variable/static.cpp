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
// class item{
//     static int count;
//     public:
//     static void show();
// };
//  int item::count;
// void item::show(){
//     cout<<count;
// }
// int main(){
//     item::show();
//     return 0;
// }
class Example{
    int a;
    static int n;
    public:
     static void display();
    void getdata(int );
    void show();
};
void Example::getdata(int x){
    a=x;
}
void Example::show(){
    cout<<"a="<<a<<endl;// object class variable ko access kr skta h but class variable ko aacess nahi kar sakta h
    cout<<"n="<<n<<endl;
}
int Example::n=10;
void Example::display(){
    cout<<"n="<<n<<endl;
}
int main(){
    Example E1,E2;
    E1.getdata(10);
    E2.getdata(20);
    Example::display();
    return 0;
}