#include <iostream>
using namespace std;
class example
{
private:
    int a;
public:
void getdata(float);
int area();
};
void example::getdata(float x){
    a=x;
}
int example::area(){
    int s = 3.14*a *a;
    return(s);
};
int main(){
    int a1,b1,r;
    cout<<"enter the no"<<endl;
    cin>>a1>>b1;
    example E;
    E.getdata(a1);
        r=E.area();
     cout<< r<<endl;
    return 0;
}
