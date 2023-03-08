#include "main.h"

/**
 * check_prime - checker function
 * @i: loop
 * @num: integer
 *
 * Return: integer
 */

int check_prime(int i, int num)
{
	if (num % i == 0)
	{
		return (0);
	}
	i++;
	if (i == num / 2)
	{
		return (1);
	}
	return (check_prime(i, num));
}



/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	{
		return (0);
	}
	return (check_prime(i, n));
}
