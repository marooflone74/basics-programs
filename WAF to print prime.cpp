#include<iostream>
using namespace std;
int prime(int n){
    bool is_prime=true;
	
	
	if(n<=1)
	   is_prime=false;
	else{
	   
	     for(int i =2;i<=n/2;i++){
		      if(n%i==0){
		         is_prime=false;
		         break;
		         }
	     	}
        }
	return is_prime;
}
	int main(){
		int n;
		cout<<" enter a number : ";
		cin>>n;
		if(prime(n)){
			cout<<" the number "<<n<<" is prime number."<<endl;
		}
		else{
			cout<<"  the number "<<n<<" is non-prime number .";
		}
	return 0;
	}

