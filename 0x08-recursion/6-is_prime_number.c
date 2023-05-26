#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - checks if a number is divisible by 2
 * @n: integer parameters
 * @a: integer parameters
 * Return: integer
 */

int divisors(int n, int a)
{
	if (a % n == 0)
	{
		return (0);
	}
	else if (a / 2 > n)
	{
		return (divisors(n + 2, a));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - Checks for prime number
 * @n: integer parameter
 * Return: integer
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
