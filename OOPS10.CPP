#include<iostream.h>
#include<conio.h>

class student
{
 protected:
	    char usn[30],name[30];
	    int age;

	    void read()
	    {
	     cout<<"\n name:\t";
	     cin>>name;
	     cout<<"usn:\t";
	     cin>>usn;
	     cout<<"age:\t";
	     cin>>age;
	    }
};

class ugstudent : public student
{
 protected:
	    int sem;
	    float fees,stipend;

     public:
	     void ug_read()
	     {
	      read();
	      cout<<"sem:\t";
	      cin>>sem;
	      cout<<"fees:\t";
	      cin>>fees;
	      cout<<"stipend:\t";
	      cin>>stipend;
	     }
       friend void average();
};

class pgstudent : public student
{
 protected:
	      int sem;
	      float fees,stipend;
       public:
	       void pg_read()
	       {
		read();
		cout<<"sem:\t";
		cin>>sem;
		cout<<"fees:\t";
		cin>>fees;
		cout<<"stipend:\t";
		cin>>stipend;
	       }
	 friend void average();
};
void average()
{
 ugstudent ug[5];
 int n,count,sum;
 cout<<"\n enter the no. of students:\t";
 cin>>n;
 for(int i=0;i<n;i++)
 ug[i].ug_read();

 cout<<"\nsem\tAVG_AGE\n";
 for(i=1;i<=8;i++)
 {
  cout<<i<<"\t";
  sum=0,count=0;
  for(int j=0;j<n;j++)
  {
   if(ug[j].sem==i)
   {
    count++;
    sum+=ug[j].age;
   }
  }
  if(count==0)
  cout<<'0';
  else
  cout<<sum/count;
  cout<<endl;
}

pgstudent pg[5];
cout<<"\n enter no. of students";
cin>>n;
for(i=0;i<n;i++)
pg[i].pg_read();
cout<<"\nsem\tAVG_AGE\t";
for(i=1;i<=4;i++)
{
 cout<<i<<"\t";
 sum=0,count=0;
 for(int j=0;j<n;j++)
 {
  if(pg[j].sem==i)
  {
   count++;
   sum+=pg[j].age;
  }
 }
 if(count==0)
 cout<<'0';
 else
 cout<<sum/count;
 cout<<endl;
 }
}

void main()
{
 clrscr();
 average();
 getch();
}








