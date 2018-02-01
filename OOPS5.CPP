#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
 char st[25];

 public:
	 string(char s[20])
	 {
	   strcpy(st,s);
	 }
	 void revs()
	 {
	  strrev(st);
	 }

	 friend void operator ==(string,string);
	 friend ostream & operator <<(ostream &out,string &s1);
};

void operator ==(string s1,string s2)
{
 if(strcmp(s1.st,s2.st)==0)
 cout<<"\n string is a palindrome!!";
 else
 cout<<"\n string is not a palindrome!!";
}

ostream & operator <<(ostream &out,string &s1)
{
 out<<s1.st;

 return out;
}

void main()
{
 string s1("mam");
 clrscr();
 cout<<"\n s1:"<<s1;
 string s2=s1;
 cout<<"\n s2:"<<s2;
 s2.revs();
 cout<<"\n reversed string:"<<s2;
 s1==s2;
 getch();
}

















