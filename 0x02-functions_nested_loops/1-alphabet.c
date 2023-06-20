#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - a function that prints the alphabet, in lowercase,
 * followed by a new line.
 * Return: if return is 0 that's a good sign :)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
