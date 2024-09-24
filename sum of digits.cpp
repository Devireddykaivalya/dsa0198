#include<iostream>
using namespace std;
int main(){
	int n=234,rem,sum=0;
	while(n!=0){
		rem=n%10;
	    sum=sum+rem;
		n=n/10;
	}
	cout <<"sum of digits:" << sum;
	return 0;

}
