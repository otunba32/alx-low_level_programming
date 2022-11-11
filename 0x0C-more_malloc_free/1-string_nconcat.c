#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: amount of bytes
 *
 * Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n > len2)
		n = len2;
	x = malloc(len1 + n + 1);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < len1 + n; i++)
	{
		if (*s1)
		{
			x[i] = *s1;
			s1++;
		}
		else
		{
			x[i] = *s2;
			s2++;
		}
	}
	x[i] = '\0';
	return (x);
}
