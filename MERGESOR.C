#include<stdio.h>
#include<conio.h>
#include<process.h>
void simple_merge(int a[],int low,int mid,int high)
{
 int i,j,k,c[20];
 k=i=low;
 j=mid+1;

 while(i<=mid && j<=high)
 {
  if(a[i]<a[j])
  {
   c[k]=a[i];
   i=i+1;
   k=k+1;
  }
  else
  {
  c[k]=a[j];
  j=j+1;
  k=k+1;
  }
 }
 while(i<=mid)
 {
  c[k++]=a[i++];
 }
 while(j<=high)
 {
 c[k++]=a[i++];
 }
 for(i=0;i<=k-1;i++)
 a[i]=c[i];
}

void mergesort(int a[],int low,int high)
{
 int mid;
 if(low<high)
 {
  mid=low+high/2;

  mergesort(a,low,mid);
  mergesort(a,mid+1,high);
  simple_merge(a,low,mid,high);
 }
}

void main()
{
 int i,n,a[20];
 clrscr();
 printf("enter the value of n \n");
 scanf("%d",&n);
 printf("enter the %d values \n",n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 mergesort(a,0,n-1);
 printf("the sorted array is \n");
 for(i=0;i<n;i++)
 printf("%d \n",a[i]);
 getch();
 }
