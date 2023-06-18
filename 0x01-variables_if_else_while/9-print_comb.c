#include <stdio.h>

/**
 * main - a program that prints all possible combinations of
 * single-digit numbers.
 * Return: if the return is 0 tha's a good sign.
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
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

	return (0);
}
