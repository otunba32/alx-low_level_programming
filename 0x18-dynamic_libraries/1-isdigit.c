#include "main.h"
/**
 * _isdigit - checksif numbers are 0 to 9
 * @c: char to check
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if  (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
