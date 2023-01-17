#include "main.h"
/**
 * _strncpy -copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to be copied
 *
 * Return: the pointer of the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
