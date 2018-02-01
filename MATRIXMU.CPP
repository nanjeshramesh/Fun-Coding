
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int a[10][10],b[10][10],c[10][10],i,j,k;
 int sum=0;
 clrscr();
 cout<<"\t enter the first matrix \t";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   cin>>a[i][j];
 }
 cout<<"\t enter the second matrix \t";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)

   cin>>b[i][j];

 }
 cout<<"the first matrix is : \n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<a[i][j];
  }
  cout<<"\n";
 }
 cout<<"the second matrix is : \n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {

    cout<<b[i][j];
  }
  cout<<"\n";
 }
 i=j=k=0;
 while(i<3)
{
 j=0;
 while(j<3)
 {
  k=0;
  while(k<3)
  { sum=sum+a[i][k]*b[k][j];
    k++;
  }

  c[i][j]=sum;
  j++;
 }
 i++;
}

 cout<<"\n the multiplication of two matrices :\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<c[i][j]<<" ";
  }
   cout<<"\n";
 }
 getch();
}
