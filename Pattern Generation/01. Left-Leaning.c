#include<stdio.h>

int main()
{
	for ( int i = 0; i < 10; i++ ) // i represents number of lines
	{
		for ( int j = 0; j <= 10; j++ ) // j represents number of spaces in a line
		{
			if ( i >= j ) printf( "*" );
			else printf( " " );
		}

		printf( "\n" );
	}

	return 0;
}
