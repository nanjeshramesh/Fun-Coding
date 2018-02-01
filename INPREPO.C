#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *l,*r;
};
struct node *head=NULL;

void inorder(struct node *head)
{
 if(head!=NULL)
 {
  inorder(head->l);
  printf("%d \n",head->data);
  inorder(head->r);
 }

 return;
}

void preorder(struct node *head)
{
 if(head!=NULL)
 {
  printf("%d \n",head->data);
  preorder(head->l);
  preorder(head->r);
 }

 return;
}

void postorder(struct node *head)
{
 if(head!=NULL)
 {
  postorder(head->l);
  postorder(head->r);
  printf("%d \n",head->data);
 }
 return;
}

void main()
{
 struct node *l,*f,*c,*n;
 int m,i,d;
 clrscr();
 printf("enter the number of elements \n");
 scanf("%d",&m);
 for(i=1;i<=m;i++)
 {
  printf("enter the data \n");
  scanf("%d",&d);
  n=malloc(sizeof(struct node));

  n->data=d;
  n->l=n->r=NULL;

  if(head==NULL)
  head=n;
  else
  {
   f=head;
   c=head;

   while(f!=NULL)
   {
    c=f;
    if(d<f->data)
    f=f->l;
    else
    f=f->r;
   }
   if(d<c->data)
   c->l=n;
   else
   c->r=n;
  }
}
printf("display the tree using inorder traversal \n");
inorder(head);
printf("display the tree using postorder traversal \n");
postorder(head);
printf("display the tree using preorder traversal \n");
preorder(head);
getch();
}