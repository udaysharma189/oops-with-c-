#include<iostream>
using namespace std;
class B{
     public:
     B()
     {
         cout<<"Constructor called"<<endl;
     }
     ~B()
     {
         cout<<"Destructor called"<<endl;
     }
};
int main()
{
    B B1;
    return 0;
}