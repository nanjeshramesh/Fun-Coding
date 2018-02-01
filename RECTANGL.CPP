
#include<iostream.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 gotoxy(60,70);
 for(i=0;i<10;i++)
 {  cout<<"\n";
  for(j=0;j<10;j++)
  {
    if(i==0 || i==9 || j==0 || j==9)
    {
    //cout<<i<<"      "<<j;
    cout<<"^";
    }
   else
   cout<<" ";
  }
 }
 getch();
}