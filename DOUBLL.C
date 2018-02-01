#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<stdlib.h>

struct node
{
 int info;
 struct node *llink;
 struct node *rlink;
};
typedef struct node *NODE;

NODE getnode(void)
{
 int x;
 x=(NODE)malloc(sizeof(struct node));
 if(x==NULL)
 {
  printf("out of memory \n");

 }
 return x;
}

void display(NODE head)
{
 NODE temp;

 if(head->rlink==NULL)
 {
  printf("empty list \n");
  return;
 }

 printf("contents of list: \n");

 for(temp=head->rlink;temp!=head;temp=temp->rlink)
 {
  printf("%d \n",temp->info);
  }
}

NODE insert_front(int item,NODE head)
{
 NODE temp,cur;
 temp=getnode();
 temp->info=item;
 cur=head->rlink;
 head->rlink=temp;
 temp->llink=head;
 temp->rlink=cur;
 cur->llink=temp;

 return head;
}

NODE insert_right(int item,NODE head)
{
 NODE temp,cur,next;

 if(head->rlink==head)
 {
  printf("empty list \n");
  return head;
 }
 cur=head->rlink;

 while(cur!=head && item!=cur->info)
  cur=cur->rlink;

  if(cur==head)
  {
   printf("key not found \n");
   return head;
  }

  next=cur->rlink;

  printf("insert to the right of %d \n",item);
  temp=getnode();
  scanf("%d",&temp->info);

  cur->rlink=temp;
  temp->llink=cur;
  temp->rlink=next;
  next->llink=temp;

  return head;
}


NODE delete_all(int item,NODE head)
{
 NODE prev,cur,next;
 int count;
 if(head->rlink==head)
 {
  printf("empty list: \n");
  return head;
  }
  count-'0';

  cur=head->rlink;
  while(cur!=head)
  {
   if(item!=cur->info)
   cur=cur->rlink;

   else
   {
    count++;
    prev=cur->llink;
    next=cur->rlink;
    prev->rlink=next;
    next->llink=prev;
    free(cur);

    cur=next;
   }
   return head;
 }
 if(count==0)
 printf("key not found \n");
 else
 printf("key found at %d position is deleted \n");
 return head;
}

void main()
{
 int choice,item;
 NODE head;
 head=getnode();
 head->rlink==head;

 for(;;)
 {
  printf("\n1.insert\t 2.insert_right\t 3.delete\t 4.display\t");
  printf("enter the choice \n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
	   printf("enter the item\n");
	   scanf("%d",&item);
	   head=insert_front(item,head);
	   break;

  case 2:
	  printf("enter the key \n");
	  scanf("%d",&item);
	  head=insert_right(item,head);
	  break;


  case 3:
	 printf("enter the key to be deleted \n");
	 scanf("%d",&item);
	 head=delete_all(item,head);
	 break;

 case 4: display(head);
	 break;

 default:exit(0);
 }
}
}