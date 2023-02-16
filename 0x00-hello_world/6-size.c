#include <stdio.h>
/**
 * main-entry point
 *
 * Return:0
 */
int main(void)
{
	char charType;
	int intType;
	long int lintType;
	long long int llintType;
	float floatType;

	printf("Size of a char: %li byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of an int: %li byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a long int: %li byte(s)\n", (unsigned long)sizeof(lintType));
	printf("Size of a long long int: %li byte(s)\n", (unsigned long)sizeof(llintType));
	printf("Size of a float: %li byte(s)\n", (unsigned long)sizeof(floatType));
	return (0);
}
