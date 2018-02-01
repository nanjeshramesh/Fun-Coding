#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#define qsize 5

typedef struct
{
 int q[qsize];
 int f;
 int r;
}queue;

void insert_front(int item,queue *a)
{
 if(a->f==0 && a->r==-1)
 a->q[++(a->r)]=item;

 else if(a->f!=0)
 a->q[--(a->f)]=item;

 else
 printf("front insertion is not possible \n");
}

void insert_rear(int item,queue *a)
{
 if(a->r==qsize-1)
 {
  printf("queue underflow \n");
  return;
 }
 a->r=a->r+1;
a->q[a->r]=item;

}

void delete_front(queue *a)
{
 if(a->f>a->r)
  {
  printf("queue underflow \n");
  return;
  }

  printf("the item deleted is %d : \n",a->q[(a->f++)]);

  if(a->f>a->r)
  {
   a->f=0;
   a->r=-1;
  }
 }

void delete_rear(queue *a)
{
 if(a->f>a->r)
 {
  printf("queue underflow \n");
  return;
 }

 printf("the item deleted is %d : \n",a->q[(a->r--)]);

 if(a->f>a->r)
 {
  a->f=0;
  a->r=-1;
 }
}

void display(queue *a)
{
 int i;

 if(a->f>a->r)
 {
  printf("queue is empty \n");
  return;
 }

 printf("the contents of the queue is: \n");
 for(i=a->f;i<=a->r;i++)
 {
  printf("%d",a->q[i]);
 }
}

void main()
{
 int choice,q[10],item;
 queue a;
 a.f=0;
 a.r=-1;
 clrscr();
 for(;;)
 {
  printf("\n1.insert front\t 2.insert rear\t \n");
  printf("\n3.delete front\t 4.delete rear\t \n");
  printf("\n5.display\t \n");
  printf("enter the choice \n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
	   printf("enter the item \n");
	   scanf("%d",&item);
	   insert_front(item,&a);
	   break;

  case 2:
	  printf("enter the item \n");
	  scanf("%d",&item);
	  insert_rear(item,&a);
	  break;

  case 3:
	  delete_front(&a);
	  break;

  case 4:
	  delete_rear(&a);
	  break;

 case 5:
	  display(&a);
	  break;

 default:exit(0);
  }
 }
}





