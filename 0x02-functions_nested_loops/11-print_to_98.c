#include <stdio.h>

/**
 * 
 *
 */

int print_to_98(int n)
{
    while (n <= 98)
    {
        if (n == 98)
        {
            printf("%d", n);
        }
        else
        {
            printf("%d, ", n);
            
        }
        n++;
    }
    return (0);
}
