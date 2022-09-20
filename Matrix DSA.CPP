#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[2][2],row,col,sum=0;
cout<<"Enter 4 numbers";
for(row=0;row<2;row++)
  {
    for(col=0;col<2;col++)
    {
     cin>>a[row][col];
    }
  }
cout<<"Matrix is= "<<endl;
for(row=0;row<2;row++)
  {
   for(col=0;col<2;col++)
    {
     cout<<a[row][col]<<"  ";
    }
cout<<endl;
  }
for(row=0;row<2;row++)
  {
  for(col=0;col<2;col++)
    {
    if(row=col);
      {
      sum=sum+a[row][col];
      }
    }
  }
  cout<<"sum of digonal element - "<<sum<<endl;

for(row=0;row<2;row++)
  {
  for(col=0;col<2;col++)
    {
    if(row>col);
      {
      a[row][col]=0;
      }
    }
  }
  cout<<"upper matrix "<<

getch();
}





