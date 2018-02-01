#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
cout<<"enter the value of n";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(i>=j)
cout<<"*";
}
cout<<endl;
}
getch();
}



