#include<iostream.h>
#include<conio.h>
#include<process.h>

class matrix
{
 int r,c,m[20][20];
 public:
	 matrix(int m,int n)
	 {
	  r=m;
	  c=n;
	 }

	 int operator==(matrix);
	 matrix operator *(matrix &);
	 matrix operator *(int);
	 friend ostream& operator <<(ostream &out,matrix&);
	 friend istream& operator >>(istream &in,matrix&);
};

/*matrix matrix::operator*(int p)
{
 matrix m4(r,c);
 for(int i=0;i<r;i++)
 for(int j=0;j<c;j++)
 m4.m[i][j]=m[i][j]*p;
 return m4;
} */




int matrix::operator==(matrix m1)
{
 if(m1.r==c)

  return 1;

 return 0;
}
matrix matrix::operator *(matrix &m1)
{
 matrix temp(r,c);
 int i,j,k;

 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   temp.m[i][j]=0;

   for(k=0;k<m1.r;k++)
   {
    temp.m[i][j]+=m[i][k]*m1.m[k][j];
    }
   }
 }
 return temp;
}
matrix matrix::operator *(int a)
{
 matrix temp(r,c);
 int i,j;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   temp.m[i][j]=a*m[i][j];
  }
 }
 return temp;
}

ostream &operator <<(ostream &out,matrix &m1)
{
 int i,j;
 for(i=0;i<m1.r;i++)
 {
  for(j=0;j<m1.c;j++)
  {
   out<<m1.m[i][j]<<"\t";
  }
 }
 return out;
}

istream &operator >>(istream &in,matrix &m1)
{
 int i,j;
 for(i=0;i<m1.r;i++)
 {
  for(j=0;j<m1.c;j++)
  {
   in>>m1.m[i][j];
  }
 }
 return in;
}
void main()
{
 int m,n,p,q,c;
 clrscr();
 cout<<"\n enter the rows and columns of first matrix:";
 cin>>m>>n;
 matrix m1(m,n);

 cout<<"\n enter the rows and columns of second matrix:";
 cin>>p>>q;
 matrix m2(p,q);

 if(m1==m2)
 {
  cout<<"\n enter the elements of first matrix:";
  cin>>m1;

  cout<<"\n enter the elements of second matrix:";
  cin>>m2;

  cout<<"\n the first matrix is:";
  cout<<m1;

  cout<<"\n the second matrix is:";
  cout<<m2;

  matrix m3(m,n);
  m3=m1*m2;
  cout<<"\n multiplication of 2 matrices:";
  cout<<"--------------------------------";

  cout<<m3;
 }



 else
 {
  cout<<"\n matrix multipication isnt possible:";
  }

  getch();
  exit(0);

  cout<<"\n enter the constant to multiply with matrix 2";
  cin>>c;
  matrix m4(m,n);
  m4=m2*c;
  cout<<m4;
  getch();
 }










