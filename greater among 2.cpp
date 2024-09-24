#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"enter the num1:";
	cin>>num1;
	cout<<"enter the num2:";
	cin>>num2;
	
	if(num1>num2){
		cout<<"the greater number is:"<<num1<<endl;
	}else if(num2>num1){
		cout<<"the greater number is:"<<num2<<endl;
	}else{
		cout<<"both numbers are equal";
	}
	return 0;
}
