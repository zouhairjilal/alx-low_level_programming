#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - everything is in the function main,
 *
 * Description: a random number stored in variable n,
 * if the number is greater than 0 is positive,
 * if the number is 0 is zero,
 * if the number is less than 0 is negative,
 *
 * Return: if it return 0 that's a good sign :)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (n == 0)
		printf("is zero");

	if (n > 0)
		printf("is positive");

	if (n < 0)
		printf("is negative");

	return (0);
}
