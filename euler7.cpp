#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n);
int primes[10000];
int n2=0;
int main()
{	
	for(int n=2;;n++)
	{	if(isprime(n))
			{	
				if(n2==10000)
				{	cout<<n<<endl;
					break;
				}
			primes[n2++]=n;
			}
	}

}
bool isprime(int n)
{	
	for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 