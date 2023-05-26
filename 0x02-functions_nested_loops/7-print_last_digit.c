#include "main.h"
/**
 * print_last_digit - it prints the last digit of a number
 * @ld: the number last digit result
 *
 * Return: the value of the last digit
 */
int print_last_digit(int ld)
{
	int last_digit = ld % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
