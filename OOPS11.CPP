#include<iostream.h>
#include<conio.h>
#include<process.h>

template<class t>
void merge(t a[],int low,int mid,int high)
{
 int i,j,k;
 double c[20];
 i=k=low;
 j=mid+1;
 while((i<=mid) && (j<=high))
 {
  if(a[i]<a[j])
  {
   c[k++]=a[i++];
  }
  else
  c[k++]=a[j++];
 }
 while(i<=mid)
 {
  c[k++]=a[i++];
 }
 while(j<=high)
 {
  c[k++]=a[j++];
 }

 for(i=low;i<=k-1;i++)
 a[i]=c[i];
}

template<class x>
void mergesort(x a[],int low,int high)
{
 int mid;
 if(low<high)
 {
  mid=(low+high)/2;
  mergesort(a,low,mid);
  mergesort(a,mid+1,high);
  merge(a,low,mid,high);
 }
}

void main()
{
   int i,n,a[30],ch=1;
   double b[20];
   clrscr();
   cout<<"\n menu:";
   cout<<"\n1.integer \n2.double \n3.exit";
   cout<<"\n enter the choice:";
   cin>>ch;
   switch(ch)
   {
    case 1:
	   cout<<"\n enter no. of elements";
	   cin>>n;
	   cout<<"\n enter integer nos. to sort:";
	   for(i=0;i<n;i++)
	   cin>>a[i];
	   mergesort(a,0,n-1);
	   cout<<"\n sorted list is:";
	   for(i=0;i<n;i++)
	   cout<<a[i]<<"\t";
	   break;

    case 2:
	    cout<<"\n enter the no. of elements:";
	    cin>>n;
	    cout<<"\n enter the floating numbers to sort:";
	    for(i=0;i<n;i++)
	    cin>>b[i];
	    mergesort(b,0,n-1);
	    cout<<"\n the sorted list:";
	    for(i=0;i<n;i++)
	    cout<<b[i]<<"\n";
	    break;

    default: exit(0);
	     break;
      }
     getch();
 }




















