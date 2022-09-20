#include<iostream>
#include<string.h>
using namespace std;
int main()
{ char s1[20],s2[20];
  int l;
cout<<"ENTER STRING= ";
cin>>s1;
s2=strcpy(s1);
cout<<"COPYING STRING IS"<<s2;
s2=strsev(s1);
cout<<"REVERSE STRING IS"<<s2;
l=strlen(s1);
}
