#include<stdio.h>

int main()
{
	printf( "Celsius\tFahrenheit\n" );

	for( int c = 0; c <= 300; c += 20 )
	{
		printf( "%d\t%d\n", c, c * 9 / 5 + 32 );
	}
}
