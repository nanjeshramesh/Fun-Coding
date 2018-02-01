#include<stdio.h>
#include<process.h>
#include<string.h>
#define queue_size 5
void insert_rear(int item,int q[],int r,int count)
{
 if(count==queue_size)
 {
   printf("queue overflow \n");
   return;
 }
 r=(r+1)%queue_size;
 q[r]=item;
 count+=1;
}
void delete_front(int q[],int f,int count)
{
 if(count==0)
 {
  printf("queue underflow \n");
  return;
 }
 printf("the item deleted is %d \n",q[f]);
 f=(f+1)%queue_size;
 count-=1;
}
void display(int q[],int f,int count)
{
 int i;
 if(count==0)
 {
  printf("queue is empty \n");
  return;
 }
 printf("contents of the queue \n");
 for(i=1;i<=count;i++)
 {
  printf("%d \n",q[f]);
 f=(f+1)%queue_size;
 }
}
void main()
{
 int choice,item,q[10],f,r,count;
 f=0;
 r=-1;
 count=0;
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
	   insert_rear(item,q,r,count);
	   break;

   case 2: delete_front(q,f,count);
	   break;

   case 3: display(q,f,count);
	   break;

   default:exit(0);
   }
  }
 }


