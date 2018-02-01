#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#define qs 3
struct que
{
 int f,r;
 int q[qs];
}pq;
typedef struct que *queue;
void insert_item(int item,queue a)
{
 int j;

 if(a->r==qs-1)
 {
  printf("queue overflow \n");
  return;
 }

 j=a->r;

 while(j<=0 && item<=a->q[j])
 {
  a->q[j+1]=a->q[j];
  j++;
 }
 a->q[j+1]=item;
 a->r++;
}

void delete_item(queue a)
{
 if(a->r>a->f)
 {
  printf("queue underflow \n");
  return;
 }

 printf("the item deleted is %d",a->q[(a->f++)]);
 if(a->f>a->r)
 {
 a->f=0;
 a->r=-1;
 }
}

void display(queue a)
{
 int i;
 if(a->f>a->r)
 {
  printf(" q empty \n");

 }
 printf("the contents of the queue : \n");
 for(i=a->f;i<=a->r;i++)
 {
  printf("%d \n",a->q[i]);
 }
}

void main()
{ int choice,item;
 queue a;
 a->f=0;
 a->r=-1;

 clrscr();
 for(;;)
 {
  printf("\n1.insert 2.delete 3.display\t");
  printf("enter the choice \n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
	   printf("enter the item \n");
	   scanf("%d",&item);
	   insert_item(item,a);
	   break;

   case 2:
	   delete_item(a);
	   break;

   case 3:
	   display(a);

  default:exit(0);

  }
 }
}