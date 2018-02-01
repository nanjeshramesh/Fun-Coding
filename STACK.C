#include<stdio.h>
#include<conio.h>
#include<process.h>
#define stack_size 5
int s[20],item,top=-1,item_deleted;
void push()
{
 if(top==stack_size-1)
 {
  printf("stack overflow \n");

 }
 top=top+1;
 s[top]=item;
}
int pop()
{
 if(top==-1)
 {
   return 0;
 }

 top=top-1;
 item_deleted=s[top];
return item_deleted;
}
void display()
{
 int i;
 if(top==-1)
 {
  printf("stack is empty \n");

 }
 for(i=0;i<=top;i++)
 {
  printf("%d",s[i]);
 }
}
void main()
{
 int choice;
 clrscr();
 for(;;)
 {
   printf("1.push \t 2.pop \t 3.display \t \n");
   printf("enter the choice \n");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:
	   printf("enter the item to insert :");
	   scanf("%d",&item);
	   push();
	   break;

   case 2:
	  item_deleted=pop();
	  if(item_deleted==0)
	  {
	   printf("stack underflow \n");
	   }
	  else
	  printf("the item deleted is %d \n",item_deleted);
	  break;

  case 3:
	 display();

  default:exit(0);
   }
  }
  getch();
}

