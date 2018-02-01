#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>

void main()
{
 char instr[20],s[20];
 int n,i,top;

 clrscr();
 printf("enter the string: \n");
 scanf("%s",instr);
 top=-1;

 n=strlen(instr);

 for(i=0;i<n;i++)
 {
  s[++top]=instr[i];
 }
 for(i=0;i<n/2;i++)
 {
  if(s[top--]!=instr[i])
 {
  printf("string isnt a palindrome \n");
  getch();
  exit(0);
 }
}
 printf("it is a palindrome \n");

 getch();
}