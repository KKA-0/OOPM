#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Three Numbers"<<endl;
	cin>>a>>b>>c;
	if (a>b && a>c){
		
		cout<<"A is Greatest Number";
	}
	else if(b>a && b>c)
{
	cout<<"B";
	
	}
	else
	{
		cout<<"C";
		}	
	
	return 0;
}


