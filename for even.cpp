//  even odd check numbber
#include<iostream>
using namespace std;
int main()
{
   int R_amount,M_payment,balance;
   int month=0;
   cout<<" enter your montly payment:";
   cin>>M_payment;
   cout<<"enter your balance:";
   cin>>balance;
   while(balance>0)
   {
   	balance=balance-M_payment;
   	cout<<balance;
   	month++;
   }
   cout<<month<<endl;

	return 0;
}
