#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first int to be swapped
 * @b: second int to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
