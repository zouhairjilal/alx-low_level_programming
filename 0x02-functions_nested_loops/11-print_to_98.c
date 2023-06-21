#include <stdio.h>

/**
 * 
 *
 */

void print_to_98(void)
{
    int n = 0;
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
