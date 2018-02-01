#include<stdio.h>
#include<process.h>
# define queue_size 5
int q[10],f,r,choice,item;
void insert_rear()
{ int item;
 if(r==queue_size-1)
  { printf("queue overflow \n");
   return;
  }
  r=r+1;
  q[r]=item;
}
void delete_rear()
{
 if(f>r)
 {
  printf("queue underflow \n");
  return;
 }
 printf("the item deleted is %d",q[f++]);
 if(f>r)
 { f=0;
   r=-1;
 }
}
void display()
{
 int i;
 if(f>r)
 {
  printf("queue empty \n");

 }
 printf("the contents of the queue is %d \n ");
 for(i=f;i<=r;i++)
 {
  printf("%d \n",q[i]);
 }
}
void main()
{
 int choice,item;
 f=0;
 r=-1;
 clrscr();
 for(;;)
 {
  printf("1.insert 2.delete 3.display 4.exit \n");
  printf("enter the choice \n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1: printf("enter the item \n");
	   scanf("%d",&item);
	   insert_rear();
	   break;

   case 2: delete_rear();
	   break;

   case 3: display();
	   break;

   default:exit(0);

   }
  }
}