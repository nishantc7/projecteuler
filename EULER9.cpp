#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	for(a=1;a<=500;a++)
		{	
			for(b=1;b<=500;b++)
			{		
				c=1000-a-b;
				if((c*c==a*a+b*b)&&a<b)	
				{	cout<<a*b*c;
				}
			}
		}


		

return 0;

	}
