#include<iostream>
using namespace std;
int main(){
	int n=153;
	int num=n;
	int sum=0;
	while(n!=0){
		int digit=n%10;
		sum+=digit*digit*digit;
		n/=10;
	}
	if(sum==num)
	cout<<num<<" it is a armstrong\n";
	else
	cout<<num<<" it is not an armstrong\n";
	return 0;
}
