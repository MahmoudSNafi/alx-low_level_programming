#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of args
 * @argv: vector of args
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
