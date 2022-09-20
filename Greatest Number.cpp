#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Three Numbers"<<endl;
	cin>>a>>b>>c;
	if (a>b){
		if (a>c){
		cout<<"A is Greatest Number";
	}
	else{
		cout<<"C";
	}
	}
	
	else{
		cout<<"B";
	}
	return 0;
}


