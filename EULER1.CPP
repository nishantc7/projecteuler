#include<iostream.h>
#include<conio.h>

int main()
{
    int su=0;

    for( int i = 0; i < 1000; ++i )
    {
	if( ( i % 3 == 0 ) || ( i % 5 == 0 )  )
	{
	    su+= i;
	}
    }
    cout<< su <<"\n";
    getch();
}
