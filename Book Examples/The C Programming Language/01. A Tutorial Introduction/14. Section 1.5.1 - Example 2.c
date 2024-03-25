#include<stdio.h>

// Copy input to output, 2nd version

int main()
{
	int c;

	while ( ( c = getchar() ) != EOF )	// getchar() will either read from the
	{									// console or ask user to input something
		putchar( c );
	}
}

// Output: Everything is mirrored to the output
// Press ctrl + c, to quit the program
