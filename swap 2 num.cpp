#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter the 2 numbers:";
	cin>>a>>b;
	
    a=a+b;
    b=a-b;
    a=a-b;
	cout<<"after swapping the numbers:"<<a<<endl;
	cout<<"after swapping the numbers:"<<b<<endl;
	return 0;
}
