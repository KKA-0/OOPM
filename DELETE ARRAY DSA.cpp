#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[6],size,pos,i,item,k,j;
	
	for(i=1;1<=size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter position to insert at locaton";
	cin>>pos;
	cout<<"Enter value to be inserted=";
	cin>>item;
	item=a[pos];
	j=pos;
	while(j<size)
	{
		a[j]=a[j+1];
		j=j+1;
		
	}
	size=size-1;
	a[pos]=item;
	size=size+1;
	cout<<"updated array is: \n";
	for(i=1; i<=size; i++)
	{
		cout<<a[i]<<" ";
	}
	getch();
	return 0;
}

