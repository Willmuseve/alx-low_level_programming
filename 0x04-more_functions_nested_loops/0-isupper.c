#include "main.h"
#include <stdio.h>
/**
 * isupper - checks upper case
 *@c: print int
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
