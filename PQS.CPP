#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
int n;
struct queue
{
int q[100];
int f;
int r;
}a1,a2,a3;
void insert()
{
if(a1.r==(n)-1)
{
       printf("Queue 1 is full\n");
	if(a2.r==(n)-1)
	{
		printf("Queue 2 is full\n");
		if(a3.r==(n)-1)
		{
		printf("Queues 3 are full\n");
		}
		else
		{
		int item;
		printf("Enter the item :");
		scanf("%d",&item);
		a3.q[++(a3.r)]=item;
		return;
		}
	}
	else
	{
	int item;
	printf("Enter the item :");
	scanf("%d",&item);
	a2.q[++(a2.r)]=item;
	return;
	}
}
else
{
int item;
printf("Enter the item :");
scanf("%d",&item);
a1.q[++(a1.r)]=item;
return;
}
}
void delet()
{
if(a1.f>a1.r)
{
       printf("Queue 1 is empty\n");
	if(a2.f>a2.r)
	{
		printf("Queue 2 is empty\n");
		if(a3.f>a3.r)
		{
		printf("Queues 3 is empty\n");
		}
		else
		{
		printf("Item deleted from queue 3:%d\n",a3.q[(a3.f)++]);
		if(a3.f>a3.r)
		{
		a3.r=-1;
		a3.f=0;
		}
		return;
		}

	}
	else
	{
	printf("Item deleted from queue 2:%d\n",a2.q[(a2.f)++]);
	if(a2.f>a2.r)
	{
	a2.r=-1;
	a2.f=0;
	}
	return;
	}

}
else
{
printf("Item deleted from queue 1 :%d\n",a1.q[(a1.f)++]);
if(a1.f>a1.r)
{
a1.r=-1;
a1.f=0;
}
return;
}
//getch();
}
void display()
{
if(a1.f>a1.r)
{
printf("Queue 1 is empty\n");
}

else
{
printf("Elements in queue 1: ");
int i;
for(i=a1.f;i<=a1.r;i++)
{
printf("%d ",a1.q[i]);
}
printf("\n");
}
if(a2.f>a2.r)
{
printf("Queue 2 is empty\n");
}
else
{
printf("Elements in queue 2: ");
int i;
for(i=a2.f;i<=a2.r;i++)
{
printf("%d ",a2.q[i]);
}
printf("\n");
}
if(a3.f>a3.r)
{
printf("Queue 3 is empty\n");
}
else
{
printf("Elements in queue 3: ");
int i;
for(i=a3.f;i<=a3.r;i++)
{
printf("%d ",a3.q[i]);
}
printf("\n");
}
getch();
}
void main()
{
clrscr();
int ch;
a1.r=-1;
a1.f=0;
a2.r=-1;
a2.f=0;
a3.r=-1;
a3.f=0;
printf("Enter the size of the queues: ");
scanf("%d",&n);
while(1)
{
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
	break;
case 2:delet();
	break;
case 3:display();
	break;
case 4:exit(0);
	break;
default:exit(0);
}
}
}