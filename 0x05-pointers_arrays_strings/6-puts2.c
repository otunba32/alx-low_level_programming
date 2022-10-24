#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string containing characters
 */
void puts2(char *str)
{
	int len, z;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (z = 0; z < len; z += 2)
	{
		_putchar(str[z]);
	}

	_putchar('\n');
}
