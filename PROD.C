#include<stdio.h>
#include<process.h>
int y;
product(int m,int n)
{
if(n==1)
return m;
if(n==0 || m==0)
return 0;
else
y=product(m,n-1)+m;
return y;
}
void main()
{
 int a,b,result;
 printf("enter the 2 numbers\n");
 scanf("%d %d",&a,&b);
 result=product(a,b);
 printf("the result is %d",result);
 getch();
 }