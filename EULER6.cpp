#include<iostream>
using namespace std;
int main()
{	int sum1=0,sum2=0,sum3=0,n=100;
	sum1=((n*(n+1))*(2*n+1))/6;
	sum2=((n*(n+1))/2)*((n*(n+1))/2);
	
	sum3=(sum2-sum1);
	cout<<"Difference is"<<sum3;
}
