#include "main.h"
/**
 * print_sign - Detrmines if the input number greater, equal or less than zero.
 * @n: the num to be checked for
 * Return: 1 is greater than zero, 0 is zero. -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		-putchar('-');
		return (-1);
	}
	_putchar('\n');
}
