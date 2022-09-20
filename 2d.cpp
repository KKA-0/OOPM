#include<iostream>
using namespace std;
int main{
int mat[10][10];
int a,b,c,d,e;
cout<<"enter a row = "<<endl;
cin>>c;
cout<<"enter a col = "<<endl;
cin>>d;
e=1;
for(a=0; a<c; a++)
{
	for(b=0; b<d; b++)
	{
		mat[a][b]=e;
		e++;
		cout<<" "<<mat[a][b];
	}
	cout<<endl;
}
return 0;

}
