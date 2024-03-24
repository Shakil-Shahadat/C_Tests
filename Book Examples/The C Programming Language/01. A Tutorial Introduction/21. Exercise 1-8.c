#include<stdio.h>

// Count lines in input

int main()
{
	int c, blanks = 0, tabs = 0, nl = 0;

	while( ( c = getchar() ) != EOF )
	{
		if( c == ' ' ) ++blanks;
		if( c == '\t' ) ++tabs;
		if( c == '\n' ) ++nl;
		
	}
	printf( "\nNumber of blanks: %d\n", blanks );
	printf( "\nNumber of tabs: %d\n", tabs );
	printf( "\nNumber of newlines: %d\n", nl );
}
