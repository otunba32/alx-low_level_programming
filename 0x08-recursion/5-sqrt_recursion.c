#include "main.h"

int _sqrt(int n, int p);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int n
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - sqrt - square recursion
 * @n: integer parameter
 * @p: integer parameter
 *
 * Return: integer
 */
int _sqrt(int n, int p)
{
	if (n < 0)
		return (-1);
	if ((p * p) > n)
		return (-1);
	if (p * p == n)
		return (p);
	return (_sqrt(n, p + 1));
}
