#include<stdio.h>

// Copy input to output, 2nd version

int main()
{
	int c;

	while ( ( c = getchar() ) != EOF )
	{
		putchar( c );
	}
}

// Output: Everything is mirrored to the output
// Press ctrl + c, to quit the program
