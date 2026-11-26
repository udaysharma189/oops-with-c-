#include <iostream>
using namespace std;
class Uday{
    int a,b;
    public:
    Uday();
    void display();
};
Uday::Uday(){
    cout<< "enter two number"<<endl;
    cin>>a>>b;
}
 void Uday:: display(){
        cout<< a <<" " <<b<<endl;
    }
int main(){
    Uday u;
    u.display();
}