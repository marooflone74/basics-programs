#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"enter a number : ";
	cin>>n;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j--){
			cout<<j;
		}

	cout<<endl;
	}
		return 0;
}
