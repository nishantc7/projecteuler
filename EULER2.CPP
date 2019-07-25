#include<iostream.h>
#include<conio.h>

int main()
{
clrscr();
long sum=0,a=1,b=2,c=0;
while(1)
{
	if(c>4000000)
	{
	break;
	}
	if(b%2==0)
	{
	sum+=b;
	}
	c=a+b;
	a=b;
	b=c;
}
cout<<sum;
getch()   ;
}

