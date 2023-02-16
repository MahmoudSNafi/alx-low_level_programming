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
	long int longintType;
	long long int longlongintType;
	float floatType0;

	printf("Size of a char: %li byte(s)\n", (unsigned long)sizeof(charType));
	printf("size of an int: %li byte(s)\n",(unsigned long)sizeof(intType));
	printf("size of a long int: %li byte(s)\n",(unsigned long)sizeof(longintType));
	printf("size of a long long int: %li byte(s)\n",(unsigned long)sizeof(longlongintType));
	printf("size of a float: %li byte(s)\n", (unsigned long)sizeof(floatType));
	return (0);
}
