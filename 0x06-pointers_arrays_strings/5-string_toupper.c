#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to be changed
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int t;

	for (t = 0; s[t] != '\0'; t++)
	{
		if (s[t] >= 'a' && s[t] <= 'z')
			s[t] = s[t] - 32;
	}
	return (s);
}
