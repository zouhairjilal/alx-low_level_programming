#include <stdio.h>

/**
 * main - a script that print alphabits upper case and lower case,
 * Return: 0 is a good sign :)
 */

int main(void)
{
	int lower;
	int upper;

	for (lower = 97; lower < 123; lower++)
	{
		putchar(lower);
	}

	for (upper = 65; upper < 91; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}

