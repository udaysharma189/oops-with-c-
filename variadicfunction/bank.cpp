#include<iostream>
using namespace std;
class bankaccount{
 public:
 int balance=0;
 static int totaldeposit;
 void showbalance();
 void totalbalance();
 int deposit(int amount);
};
int bankaccount::totaldeposit=0;
int bankaccount::deposit(int amount){ 
    balance+=amount;
    totaldeposit+=amount;
}
void bankaccount::showbalance(){
    cout<<"Balance is: "<<balance<<endl;
}
void bankaccount::totalbalance(){
    cout<<"Total deposit is: "<<totaldeposit<<endl;
}
int main(){
    bankaccount b1,b2;
    b1.deposit(1000);
    b1.showbalance();
    b2.deposit(2000);
    b2.showbalance();
    b1.totalbalance();
    return 0;
}
