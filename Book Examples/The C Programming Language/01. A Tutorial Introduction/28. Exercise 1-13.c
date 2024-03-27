/*
	Write a program to print a histogram of the lengths of words in its input.
	It is easy to draw the histogram with the bars horizontal; a vertical
	orientation is more challenging.

	The sentence used here: Write a program to print a histogram of the lengths
	
	Potential limitation: This program can count upto 10 words with maximum
	length of 10 letters.
*/

#include<stdio.h>

int main()
{
	int c = 0;
	int myArray[ 10 ];

	// Array initialization to 0
	for( int i = 0; i < 10; i++ )
	{
		myArray[ i ] = 0;
	}

	int j = 0;

	while( ( c = getchar() ) != EOF )
	{
		if( c != ' ' )
		{
			if( c != ',' && c != '.' && c != '\n' && c != '\t' )
			{
				++myArray[ j ];
			}
		}
		else
		{
			j++;
		}
	}

	// Array visualization
	// for( int k = 0; k < 10; k++ )
	// {
	// 	printf( "%d\n", myArray[ k ] );
	// }

	// Horizontal Histogram
	printf( "\nThe horizontal histogram:\n\n" );
	for( int m = 0; m < 10; m++ )
	{
		for( int n = 0; n < myArray[ m ]; n++ )
		{
			printf( "* " );
		}
		printf( "\n" );
	}

	// Vertical Histogram
	printf( "\nThe vertical histogram:\n\n" );
	for( int p = 10; p > 0; p-- )
	{
		for( int q = 0; q < 10; q++ )
		{
			if( myArray[ q ] >= p ) printf( "* " );
			else printf( "  " );
		}
		printf( "\n" );
	}
}
