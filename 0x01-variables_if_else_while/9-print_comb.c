#include <stdio.h>

/**
 * main - 
 *
 */

int main(void)
{
	int i;

	for (i = 48; i <=57; i++)
	{
		putchar(i);
		
		if (i == 57)
		{
			continue;
		}
		else
		{

		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
}
