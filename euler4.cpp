#include<conio.h>
#include<iostream>
using namespace std;

int pallindrome(int num)
{	int new_num=0;
	int dig=0;
	while(num!=0)
	{	
		dig=num%10;
		new_num = new_num*10+dig;
		num=num/10;
	}
	return new_num;
}
int main()
{	int n1=999;
	int n2=999;
	int largest=0;
	for(; n1>=100;n2--)
	{
		if(n2<100)
		{	n1--;
			n2=999;
			continue;
		}
		
		if(pallindrome(n1*n2)==n1*n2)
		
			{
				if(largest<n1*n2)
					{	largest=n1*n2;
					}
			}

	}
cout<<"Largest"<<largest;
return 0;
}


 
