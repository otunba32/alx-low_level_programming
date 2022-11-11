#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array
 * @nmemb: function parameter.
 * @size: size of bytes
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		x[nmemb] = 0;
	return ((void *)x);
}
