#include "main.h"
/**
 * helperFunction - returns 0 or 1
 * @num: number
 * @x: factor
 * Return: returns result
 */
int helperFunction(int num, int x)
{
	if (x < num)
	{
		if (num % x == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, x + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number -  returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: integer
 * Return: return retsult
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
