/*
 * main - printing the size of various types
 * Return 0 to exit the program
 */
#include <stdio.h>

int main(void)
{
	char character;
	int integer;
	long int long_integer;
	long long int super_long_integer;
	float float_type;

	printf("Size of a char: %zu byte(s)\n", sizeof(character));
	printf("Size of an int: %zu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_integer));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(super_long_integer));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_type));
	return (0);
}
