#include <stdio.h>

/**
 * main - a script that prints alphabits in lowercase
 * * except q and e ony using putchar,
 * Return: if return is 0 is a good sign :)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 100)
			i++;
		else
			putchar(i);
	}
	putchar('\n');

	return (0);
}
