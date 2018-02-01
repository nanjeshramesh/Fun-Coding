#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
void main()
{
 int i,z=1;
 clrscr();
 gotoxy(25,5);
 cout<<"loading:";
 for(i=1;i<=20;i++)
 { gotoxy(33,5);
   cout<<i<<"%";
   gotoxy(z+33,5);
   cout<<"*";
   delay(500);
   z++;
  }

 getch();

}
