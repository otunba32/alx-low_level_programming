#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, a, b;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (b = len / 2; str[b] != '\0'; b++)
		{
			_putchar(str[b]);
		}
	} else if (len % 2)
	{
		for (a = (len - 1) / 2; a < len - 1; a++)
		{
			_putchar(str[a + 1]);
		}
	}
	_putchar('\n');
}
