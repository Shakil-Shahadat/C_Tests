/*
	Write a program to print a histogram of the frequencies of different
	characters in it's input.
*/

#include<stdio.h>

int main()
{
	int c = 0;
	int freq[ 96 ];

	// Array Initialization
	for( int i = 0; i < 96; i++ )
	{
		freq[ i ] = 0;
	}

	// Counting the frequencies of each characters
	while( ( c = getchar() ) != EOF )
	{
		++freq[ c - ' ' ];
	}

	for( int i = 0; i < 96; i++ )
	{
		// printf( "%c: %d\n", i + ' ', freq[ i ] );
		printf( "%c: ", i + ' ' );

		// Horizontal Histogram
		for( int j = 0; j < freq[ i ]; j++ )
		{
			printf( "* " );
		}
		printf( "\n" );
	}
}
