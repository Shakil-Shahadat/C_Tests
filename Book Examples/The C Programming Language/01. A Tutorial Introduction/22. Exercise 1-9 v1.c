#include<stdio.h>

int main()
{
	int c, state = 0;

	while( ( c = getchar() ) != EOF )
	{
		if( c == ' ' )
		{
			if( state == 0 )
			{
				state = 1;
				putchar( c );
			}
		}
		else
		{
			state = 0;
			putchar( c );
		}
	}
}
