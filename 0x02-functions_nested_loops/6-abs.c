#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: is an argument
 * Return: the absolute value of int.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	return (n);
}
