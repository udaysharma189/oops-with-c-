# include <iostream>
using namespace std;
int main(){
    int a = 10;
    int*P;
    P= &a;
    cout<<*P<<endl;
    cout<< *(&a) <<endl;
    cout<< &P<<endl;
}