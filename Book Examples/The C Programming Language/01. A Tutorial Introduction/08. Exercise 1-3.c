#include<stdio.h>

// Print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300

int main()
{
	float fahr, Celsius;
	int lower, upper, step;

	lower = 0; // lower limit of temperature table
	upper = 300; // upper limit
	step = 20; // step size

	fahr = lower;

	printf( "Fahrenheit\tCelsius\n" );

	while ( fahr <= upper )
	{
		Celsius = ( 5.0 / 9.0 ) * ( fahr - 32.0 );
		printf( "%10.0f %12.1f\n", fahr, Celsius );
		fahr = fahr + step;
	}
}
