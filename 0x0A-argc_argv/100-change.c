#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count of args
 * @argv: vector of args
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int count = 0;
	int money = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	count += money / 25;
	money = money % 25;
	count += money / 10;
	money = money % 10;
	count += money / 5;
	money = money % 5;
	count += money / 2;
	money = money % 2;
	count += money / 1;
	printf("%i\n", count);
	return (0);
}
