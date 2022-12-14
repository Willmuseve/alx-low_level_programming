#include "main.h"
/**
 * _abs - starting point 
 * Return: always 0 
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (r *(-1));
	}
	else if (r == 0)
	{
		return (0);
	}
	else
	{
		return (r);
	}
}
