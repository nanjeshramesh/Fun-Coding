#include<iostream.h>
#include<conio.h>
#include<stdlib.h>


template<class t>

class queue
{
 t a[40],item;
 int n,front,rear;

 public:
	 void queue(int x)
	 {
	  n=x;
	  front=0;
	  rear=-1;
	 }

	 void insert();
	 void del();
	 void display();
};

template<class t>
void queue<t> :: insert()
{
   if(rear==n-1)
   {
    cout<<"\n queue full";
    return;
   }
    cout<<"\n enter ele to ins:";
    cin>>item;

   a[++rear]=item;
}

template<class t>
void queue<t> :: del()
{
 if(front>rear)
 {
  cout<<"\n queue empty:";
  return;
 }
 cout<<"\n item deleted is:"<<a[front++];

  if(front>rear)
  {
   front=0;
   rear=-1;
  }
}

template<class t>
void queue<t> :: display()
{
 if(front>rear)
 {
  cout<<"\n queue empty:";
  return;
 }

 for(int i=front;i<=rear;i++)
 cout<<a[i]<<"\t"<<endl;
}

void main()
{
 int n,ch;
 clrscr();
 cout<<"\n enter the no. of elements:";
 cin>>n;
 queue<int>iq;
 queue<double>dq;

 cout<<"\n integer type:";
 do
 {
  cout<<"\n1.insert: \n2.delete: \n3.display:";
  cout<<"\n enter the choice:";
  cin>>ch;
  switch(ch)
  {
   case 1:
	     iq.insert();
	     break;

   case 2: iq.del();
	   break;

   case 3: iq.display();
	   break;


  }

 }while(ch<4);
 cout<<"\n float type:";
 do
 {
  cout<<"\n1.insert: \n2.delete: \n3.display:";
  cout<<"\n enter the choice:";
  cin>>ch;
  switch(ch)
  {
   case 1:
	   dq.insert();
	    break;

   case 2:  dq.del();
	    break;

   case 3:  dq.display();
	    break;

		}
    }
    while(ch<4);
    getch();
 }













