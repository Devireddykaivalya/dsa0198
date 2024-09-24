#include<iostream>
using namespace std;
int main(){
	int n=123321;
	int rev=0;
	int num=n;
	while(n!=0){
		int rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(rev==num){
		cout<<"it is a palindrome";
	}
	else{
		cout<<"it is not a palindrome";
	}
	return 0;
}
