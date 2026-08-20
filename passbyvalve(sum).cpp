#include <iostream>
using namespace std;
int sum(int ,int);


int main() {
    int a,b,r;
    cout<<"enter the two valve"<<endl;
    cin>>a>>b;
    r=sum(a,b);
    cout<<r;
}
int sum(int x,int y){
    int s;
    s=x+y;
    return(s);

    

    
}