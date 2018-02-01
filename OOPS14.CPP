#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>

struct list
{
 int info;
 struct list *link;
 };
 typedef struct list node;

 class linklist
 {
  node *first;

  public:
	   linklist()
	   {
	    first=NULL;
	   }
	   friend linklist insert_front(int,linklist);
	   friend linklist insert_rear(int,linklist);
	   friend linklist delete_front(linklist);
	   friend linklist delete_rear(linklist);

	   void display()
	   {
	     node *cur;
	     if(first==NULL)
	     cout<<"\n list empty!!";
	     else
	     {
	      cur=first;
	      cout<<"\n list elements:";
	      while(cur!=NULL)
	      {
	       cout<<cur->info<<<"\t";
	       cur=cur->link;
	      }
	      cout<<endl;
	    }
	  }
};

linklist insert_front(int x,linklist ll)
{
 node *temp=new node;
 temp->info=x;
 temp->link=ll.first;
 ll.first=temp;
 return ll;
}

linklist insert_rear(int x,linklist ll)
{
 node *temp=new node;
 if(ll.first==NULL)
 {
  temp->info=x;
  temp->link=NULL;
  ll.first=temp;
  return ll;
 }
 else
 {
  node *cur;
  cur=ll.first;
  while(cur->link!=NULL)
   cur=cur->link;
  temp->info=x;
  temp->link=NULL;
  cur->link=temp;
  return ll;
 }
}

linklist del_front(linklist ll)
{
 if(ll.first==NULL)
 {
  cout<<"\n list empty!";
 }
 else
 {
  cout<<"\n item deleted is:"<<ll.first->info<<endl;
  ll.first=ll.first->link;
  }
  return ll;
}


linklist del_rear(linklist ll)
{
 if(ll.first==NULL)
 {
  cout<<"\n empty list!!";
 }
 else if(ll.first->link==NULL)
 {
  cout<<"\n item deleted is:"<<ll.first->info<<endl;
  ll.first=ll.first->link;
 }
 else
 {
  node *prev,*cur;
  cur=ll.first;
  prev->link=cur;
  while(cur->link!=NULL)
  {
   cur=cur->link;
   prev=prev->link;
  }
  prev->link=NULL;
  cout<<"\n item deleted is:"<<cur->info;<<endl;
 }
 return ll;
}

void main()
{
 int ch,x;
 linklist ll;
 clrscr();
 while(1)
 {
  cout<<"\n1.insf \n 2.insr \n3.delf \n4.delr \n 5.display";
  cout<<"\n enter your choice:";
  cin>>ch;
  switch(ch)
  {
   case 1: cout<<"\n enter element to insert";
   cin>>x;
   x=insert_front(x,ll);
   break;

   case 2:
	   cout<<"\n neter element to insert";
	   cin>>x;
	   x=insert_rear(x,ll);
	   break;

   case 3: ll=del_front(ll);
	   break;

   case 4: ll=del_rear(ll);
	     break;

   case 5: ll.display();
   break;

   default: exit(0);
	 break;
    }
   } getch();
  }












