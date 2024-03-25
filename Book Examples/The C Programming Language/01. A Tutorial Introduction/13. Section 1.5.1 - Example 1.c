#include<stdio.h>

// Copy input to output, 1st version

int main()
{
	int c;

	c = getchar(); // Last two line can be combined into one

	while ( c != EOF )
	{
		putchar( c );
		c = getchar();
	}
}

// Output: Everything is mirrored to the output
// Press ctrl + z and then enter to end the program
