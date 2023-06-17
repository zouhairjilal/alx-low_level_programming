#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * I can only use putchar twice and using only putchar
 * Return: if return is 0 that's a good sign
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
