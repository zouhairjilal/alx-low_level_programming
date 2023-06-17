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
		printf("%c", lower);
	}

	for (upper = 65; upper < 91; upper++)
	{
		printf("%c", upper);
	}

	return (0);
}

