#include <iostream> 
using namespace std;
class Example{
    int a;
    static int n;
    public:
    Example (int x){
        a=x;

    }
    void display(){
        cout<<a<<endl;
        cout<<n<<endl;
    }
    void display(){
        cout<<a<<endl;
        cout<<n<<endl;
    };
    int Example::n = 100;
    int main(){
        Example obj(10);
        obj.display();
        
    }
}