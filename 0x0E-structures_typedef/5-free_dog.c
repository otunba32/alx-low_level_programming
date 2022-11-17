#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 * @d: dog to be free
 *
 * Return: NULL
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
