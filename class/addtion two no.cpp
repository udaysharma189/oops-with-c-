#include <iostream>
using namespace std;
class example
{
private:
    int a,b;
public:
void getdata(int,int);
int add();
void sum();
};
void example::getdata(int x, int y){
    a=x;
    b=y;
}
int example::add(){
    int s = a+b;
    return(s);
};
int main(){
    int a1,b1,r;
    cout<<"enter the no"<<endl;
    cin>>a1>>b1;
    example E;
    E.getdata(a1,b1);
        r=E.add();
     cout<< r<<endl;
    return 0;
}
