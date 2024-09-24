#include<iostream>
using namespace std;
int main(){
	int a[3][3]={{1,2,3},
	{4,5,6},
	{7,8,9}	};
	int add,i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j)
			add=add+a[i][j];
		}
	}
	cout<<"the sum of diagonals is:"<<add;
	return 0;
}
