#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
 int length;
 char *name;

 public:
	    string()
	    {
	     length=0;
	     name=new char[length+1];
	    }

	    string(char *s)
	    {
	     length=strlen(s);
	     name=new char[length+1];
	     strcpy(name,s);
	    }

	    void display()
	    {
	     cout<<"\n name:"<<name;
	    }

	    void join(string&,string&);
};

void string::join(string &a,string &b)
{
 length=a.length+b.length;
 delete name;
 name=new char[length+1];
 strcpy(name,a.name);
 strcat(name,b.name);
}

void main()
{
 string s1("nanjesh");
 string s2("gowda");
 string s3("mandya");
 string s4,s5;
 clrscr();
 s1.display();
 s2.display();
 s3.display();
 s4.join(s1,s2);
 s5.join(s4,s3);

 s4.display();
 s5.display();

 getch();
}









