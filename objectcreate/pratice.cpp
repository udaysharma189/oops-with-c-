#include <bits/stdc++.h>
using namespace std;
class example{
    int a,b;
    public:
    void geta(int,int);
    int sum(example,example);
    
};
void example::geta(int a1,int b1){
    a=a1;
    b=b1;
}
int example::sum(example A,example B){
    int s=A.a+B.a;
    int t=A.b+B.b;
    return (s);
    
}

int main() {
    example E1,E2,E3;
    E1.geta(10,15);
    E2.geta(20,25);
    int r=E3.sum(E1,E2);
    int s=E3.sum(E1,E2);
    cout<<r<<endl<<s;
    
return 0;    
	

}