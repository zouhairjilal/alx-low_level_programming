#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the full process runs on the main function,
 * description: a random number stored in variable n
 * if tha last digit of n is 0 it print on the terminal
 * also if last digit is greater than 5
 * also if the last digit is less than 6 and not 0
 * Return: 0 is a good sign :)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	/* your code goes there */

	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d ", n, last_digit);
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
