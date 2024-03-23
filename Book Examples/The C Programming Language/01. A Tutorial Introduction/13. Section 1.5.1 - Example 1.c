#include<stdio.h>

// Copy input to output, 1st version

int main()
{
	int c;

	c = getchar();

	while ( c != EOF )
	{
		putchar( c );
		c = getchar();
	}
}

// Output: Everything is mirrored to the output
// Press ctrl + c, to quit the program
