#include <stdio.h>

/**
 * main - a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * I can only use putchar function and only twice,
 * Return: if return is 0 is a good sign :)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
