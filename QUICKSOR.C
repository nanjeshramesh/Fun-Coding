#include<stdio.h>
#include<conio.h>
int partition(int a[],int low,int high)
{
 int i,j,key,temp;
 key=a[low];
 i=low+1;
 j=high;

 while(1)
 {
  while(key>=a[i] && i<high)
  i++;
  while(key<a[j])
  j--;
  if(i<j)
 {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
 }
  else
  {
  temp=a[low];
  a[low]=a[j];
  a[j]=temp;

   return j;
    }

  }
}

void quicksort(int a[],int low,int high)
{
 int j;
 if(low<high)
 {
 j=partition(a,low,high);
 quicksort(a,low,j-1);
 quicksort(a,j+1,high);
 }
}

void main()
{
 int i,n,a[30];
 clrscr();
 printf("enter the value of n \n");
 scanf("%d",&n);
 printf("enter the %d values of n: \n",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 quicksort(a,0,n-1);
 printf("the sorted array : \n");
 for(i=0;i<n;i++)
 printf("%d \n",a[i]);
 getch();
}