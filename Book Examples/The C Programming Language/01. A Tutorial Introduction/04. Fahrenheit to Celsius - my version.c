#include<stdio.h>

int main()
{
	printf( "Fahrenheit\tCelsius\n" );

	for( int f = 0; f <= 300; f += 20 )
	{
		// printf( "%d\t\t%d\n", f, 5 / 9 * ( f - 32 ) ); // C will always be 0
		printf( "%d\t\t%d\n", f, 5 * ( f - 32 ) / 9 );
	}
}
