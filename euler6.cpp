#include<iostream>
using namespace std;
int main()
{	int sum1=0,sum2=0,sum3=0,sum=0;
	for(int i;i<=100;i++)
	{	
		sum1=sum1+(i*i);
		sum2=sum2+i;
	}
	sum3=sum2*sum2;
	sum=(sum3-sum1);
	cout<<"Difference is"<<sum;
}