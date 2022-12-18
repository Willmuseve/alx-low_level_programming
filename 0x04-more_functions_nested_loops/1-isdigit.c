#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: contains the value
 * return: returns 0 or 1 depending on the outcome
 */

int _isdigit(int c)
{
	while (c < 10)
	{
		if ((c >= 0) && (c <= 9))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
