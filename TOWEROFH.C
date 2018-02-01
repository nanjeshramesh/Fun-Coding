#include<stdio.h>
#include<conio.h>
#include<process.h>
void tower(int n,char source,char temp,char dest)
{
 if(n==1)
  {
    printf("move %d from %c to %c \n",n,source,dest);
    return;
    }
 tower(n-1,source,dest,temp);
 printf("move %d from %c to %c \n",n,source,dest);
tower(n-1,temp,source,dest);

 }
 void main()
 {
  int n;
//  char source,dest,temp;
  clrscr();
  printf("enter the number of discs \n");
  scanf("%d",&n);
  tower(n,'A','B','C');

  getch();
  }



