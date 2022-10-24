
#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int t, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (t = len - 1; t >= 0; t--)
	{
		_putchar(s[t]);
	}

	_putchar('\n');
}
