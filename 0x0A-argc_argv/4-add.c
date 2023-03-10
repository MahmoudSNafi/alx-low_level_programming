#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: count of args
 * @argv: vector of args
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j;
	int sum = 0;
	char *c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		c = argv[i];
		for (j = 0; j < strlen(c); j++)
		{
			if (!(c[j] >= 48 && c[j] <= 57))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
