#include<iostream>
using namespace std;
class Item{
    static int count;
    int n;
    public:
    void getdata(int x){
        n=x;
        count++;
    }
    void display(){
        cout<<"n="<<n<<endl;
        cout<<"count="<<count<<endl;
    }
};
int Item::count = 0;
// imp hai 