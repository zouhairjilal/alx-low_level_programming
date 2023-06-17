#include <stdio.h>

/**
 * main - a script that print alphabit in lowercase,
 * Return: if return is 0 is a good sign :)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
