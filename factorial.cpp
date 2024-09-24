#include<iostream>
using namespace std;
int main(){
	int fact=1,n,i;
	cout<<"enter the number:";
	cin>>n;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	cout<<"factorial is:"<<fact<<endl;
	return 0;
}
