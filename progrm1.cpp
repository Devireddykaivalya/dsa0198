#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number:";
	cin>>n;
	int number=n;
	int result=0;
	while(n>0){
		int digit=n%10;
		result+=digit*digit*digit;
		n/=10;
	}
	if(result==number){
		cout<<"it is a armstrong number";
	}
	else{
		cout<<"it is not a armstrong number";
	}
return 0;	
}
