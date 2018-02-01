#include<iostream.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=0;i<=5;i++)
 {
  for(j=0;j<=i;j++)
  {
   cout<<"\t "<<i*j;
  }
  cout<<"\n";
 }
 getch();
}
