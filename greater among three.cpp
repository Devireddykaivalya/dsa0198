#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter the three numbers:";
	cin>>a>>b>>c;
	
	if(a>=b && a>=c){
		cout<<"the greater number is:"<<a<<endl;
	}else if(b>=a && b>=c){
	cout<<"the greater number is:"<<b<<endl;
	}else{
		cout<<"the greater number is:"<<c<<endl;
	}
	return 0;
}
