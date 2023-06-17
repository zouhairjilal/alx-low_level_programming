#include <stdio.h>

/**
 * main - a script that print alphabits upper case and lower case,
 * Return: 0 is a good sign :)
 */

int main(void)
{
	for (int i = 97; i < 123; i++)
		printf("%c", i);

	for (int i = 65; i < 90; i++)
		printf("%c", i);

	return (0);
}

