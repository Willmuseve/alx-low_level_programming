#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: contains the value
 * Return: returns 0 or 1 depending on the outcome
 */

int _isdigit(int c)
{
	for (c = 0; c < 10; c++)
	{
		if (c < 10)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
