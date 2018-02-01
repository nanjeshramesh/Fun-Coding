
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
  char mov_name,namef[20],namel[20],password[20],mobile_no[30],email_id[20];
 clrscr();

 cout<<"\n first name: \t";
 cin>>namef;
 cout<<"\n last name: \t";
 gets(namel);
 clrscr();
 cout<<"mobile number : \t";
 cin>>mobile_no;
 cout<<"email-id : \t";
 cin>>email_id;
 cout<<"password :";
 cin>>password;
   if(strcmp(password,"123")==0)
  {
   cout<<"proceed to movie ticket booking ";

    clrscr();
     int z=1,i;
    gotoxy(25,5);
    cout<<"loading:";

    for(i=1;i<=10;i++)
    {
     gotoxy(33,5);
     cout<<i<<"%";
     gotoxy(z+34,5);
     cout<<"*";
     delay(500);
     z++;
     }
    clrscr();
    cout<<"\t 1.check available movies: \n \t 2.check your booking status: \n \t 3.ticket cancellation: \n";
      int choice;
      cout<<"enter the choice \n";
      cin>>choice;
      switch(choice)
      {
       case 1:
	       cout<<"KANNADA MOVIE \t1.GURUSHREE CINEMAS:showing MASTERPIECE\n TELUGU MOVIE \t2.BIG CINEMAS:showing BAHUBALI\n ENGLISH MOVIE\t3.INOX:showing MARTIAN\n HINDI MOVIE\t4.PVR CINEMAS:showing PK\n";
	       break;

       case 2: break;

       case 3: cout<<" you can proceed with cancellation with your mobile number \n"<<mobile_no;
	       break;

      }
   }
   else
  {
   char ch;
   cout<<"invalid password -__- \n";
   clrscr();
   cout<<"Do u want to hack!!!!\n";
   cin>>" ";
   int i,n,a[100];
   {
   for(i=0;i<n;i++)
   {
     a[i]=rand()%1000;
     printf("%c",a[i]);
     delay(100);
   }
  }


   }
getch();

}



