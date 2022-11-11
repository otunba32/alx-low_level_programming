#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
