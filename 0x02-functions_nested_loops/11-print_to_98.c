#include <stdio.h>
#include "main.h"

/**
 * 
 *
 */

void print_to_98(int n)
{
    while (n <= 98)
    {
        if (n == 98)
        {
            _putchar(n);
        }
        else
        {
           _putchar(',');
	   _putchar(' ');
	   _putchar(n);
        }
        n++;
    }
    return (0);
}
