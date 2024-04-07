#include<stdio.h>

int result( int base, int power );

int main()
{
	int base = 0, power = 0;

	printf( "Enter the base: " );
	scanf( "%d", &base );

	// printf( "%d\n", base );

	printf( "Enter the power: " );
	scanf( "%d", &power );

	// The power can't be negative
	if( power < 0 )
	{
		printf( "The power can't be negative." );
		return 0;
	}

	// printf( "%d\n", power );

	printf( "The result is %d.", result( base, power ) );
}

int result( int b, int p )
{
	int r = b;

	if( p == 0 )
	{
		return 1;
	}
	else
	{
		for( int i = 1; i < p; i++ )
		{
			r = r * b;
		}

		return r;
	}
}
