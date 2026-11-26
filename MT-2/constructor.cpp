#include <iostream>
using namespace std;
class item{
    public:
    item();
};
item::item(){
    cout<< "constructor called"<<endl;
}
int main(){
    item t1;
}

