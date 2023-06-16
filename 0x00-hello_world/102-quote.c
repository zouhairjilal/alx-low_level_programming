#include <stdio.h>

/**
 * main - printing this words
 * "and that piece of art is useful\" - Dora Korpar, 2015-10-19",
 * print - is a function i creaed to print does words,
 * Prints a message to the console.
 * @return 0 on success, -1 on failure.
 * @text: is the string,
 * Return 1 is the best result
 */
int print(const char *text, ...);

int main(void)
{
	print("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
