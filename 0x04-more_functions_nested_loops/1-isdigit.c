#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: contains the value
 * Return: returns 0 or 1 depending on the outcome
 */

int _isdigit(int c)
{
	if ((c>= 48) && (c <= 57))
	return (1);

	return (0);
}
