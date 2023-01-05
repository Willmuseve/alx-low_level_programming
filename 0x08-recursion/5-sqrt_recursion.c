#include "main.h"
/**
 * helperFunction - checks if sqrt exists
 * @num: number
 * @psqrt: possible squareroot number
 * Return: sqrt of number
 */
int helperFunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
		{
			return (-1);
		}
		else
		{
			return (helperFunction(num, psqrt + 1));
		}
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (helperFunction(n, 0));
	}
}
