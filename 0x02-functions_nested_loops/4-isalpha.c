#include "main.h"
/**
 * _isalpha - starting point
 * @c: has value
 * Return: returns 0
 */
int _isalpha(int c)
{
	if ((c < 'z' && c > 'a') || (c < 'Z' && c > 'A'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
