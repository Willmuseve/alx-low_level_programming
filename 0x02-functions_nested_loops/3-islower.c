#include "main.h"
/**
 * _islower - starting point
 * @c: has value
 * Return: always 0
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
