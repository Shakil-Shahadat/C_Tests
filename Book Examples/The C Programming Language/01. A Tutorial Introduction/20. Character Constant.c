#include<stdio.h>

int main()
{
	// Ref: https://www.ascii-code.com/

	printf( "%d\n", 'A' ); // Find character set 'value' of A
	printf( "%c\n", 65 ); // Find character set 'alphabet' for 65
	// printf( "%c\n", 7 ); // This creates an auditory warning

	for( int i = 32; i < 128; i++ )
	{
		printf( "\nThe ASCII value of %c is %d", i, i ); // ASCII Printable Characters
	}
}
