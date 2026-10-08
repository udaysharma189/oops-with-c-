#include <iostream>
using namespace std;
void display(){
    cout<<"end"<<endl;
}
template<typename T, typename... Args>
void display(T first, Args... rest){
    cout<<first<<endl;
    display(rest...);
}
int main(){
    display(10, 10.5, "Uday Sharma");
    return 0;
}