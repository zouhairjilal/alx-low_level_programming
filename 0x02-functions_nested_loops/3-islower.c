#include "main.h"

/**
 * _islower - this function return 1 if c is lower,
 * Return: 0
 */

int _islower(int c)
{
	int lower;
	int upper;

	for (lower = 'a'; lower < 'z'; lower++){
		if ( c == lower)
			return (1);

	for (upper = 'A'; upper < 'Z'; upper++)
	{
		if ( c == upper)
			return (0);
	}
}
