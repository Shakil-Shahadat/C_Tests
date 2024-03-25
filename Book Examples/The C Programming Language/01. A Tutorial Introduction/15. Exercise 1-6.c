#include<stdio.h>

int main()
{
	printf( "%d", getchar() != EOF );
	// Output: Anything but EOF produces 1, EOF produces 0
}
