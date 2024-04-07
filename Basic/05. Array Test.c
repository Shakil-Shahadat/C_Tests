/*
	Testing if a value can be assigned to an undefined array element.
	Resultt: No.
*/

#include<stdio.h>

int main()
{
	int myArray[ 5 ];

	// myArray[ 1 ] = 50;
	// printf( "%d\n", myArray[ 1 ] );

	myArray[ 10 ] = 100;
	printf( "%d\n", myArray[ 10 ] );
	// It crashes, although shows the correct value.
}
