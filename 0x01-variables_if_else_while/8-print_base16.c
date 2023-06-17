#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * i can use only putchar and only twice.
 * Return: if return is 0 tha's a good sign.
 */
int main(void)
{
	int num;
	int alphbt;

	for (num = 48; num <= 57; num++)
		putchar(num);

	for (alphbt = 97; alphbt <= 102; alphbt++)
		putchar(alphbt);
	
	putchar('\n');

	return (0);
}
