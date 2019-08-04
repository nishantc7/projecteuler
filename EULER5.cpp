#include<iostream>

using namespace std;

int gcm (long long a, long long b)

{
  while (a != 0)
 
   {
     
 long long c = a;

      a = b % a;
 
     b = c;

    }
 
 return b;
}


int lcm (long long a, long long b)

{

  return  ( (a*b)/ gcm (a, b));

}


int main ()

{
  long long result = 1;

  for (int i = 2; i <= 20; i++)
  
  result = lcm (result, i);

 
 cout << result;
  
return 0;

}
