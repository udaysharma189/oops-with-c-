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
// This C++ code demonstrates the use of variadic templates to create a function that can accept a variable number of arguments of different types. The `display` function is defined in two forms: one that takes no arguments and simply prints "end", and another that takes at least one argument and recursively calls itself with the remaining arguments.