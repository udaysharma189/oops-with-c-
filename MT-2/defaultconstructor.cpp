#include <iostream>
using namespace std;
class Uday{
    int a,b;
    public:
    Uday();
    void display(){
        cout<< a <<" " <<b<<endl;
    }
};
Uday::Uday(){
    cout<< "enter two number"<<endl;
    cin>>a>>b;
}
int main(){
    Uday u;
    u.display();
}