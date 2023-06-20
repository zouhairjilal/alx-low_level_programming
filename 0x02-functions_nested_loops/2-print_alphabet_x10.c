#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return:0
 */

void print_alphabet_x10(void)
{
	int repeat = 0;

	while (repeat < 10)
	{
		int a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
		repeat++;
	}
}
