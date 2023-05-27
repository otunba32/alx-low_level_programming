#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogN;
	int x, y, z;
	char *n, *o;

	dogN = malloc(sizeof(dog_t));
	if (dogN == NULL)
		return (NULL);

	for (x = 0; name[x] != '\0'; x++)
		;
	for (y = 0; owner[y] != '\0'; y++)
		;

	n = malloc(sizeof(char) * x + 1);
	if (n == NULL)
	{
		free(dogN);
		return (NULL);
	}
	o = malloc(sizeof(char) * y + 1);
	if (o == NULL)
	{
		free(n);
		free(dogN);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		n[z] = name[z];
	for (z = 0; z <= y; z++)
		o[z] = owner[z];

	dogN->name = n;
	dogN->age = age;
	dogN->owner = o;

	return (dogN);
}
