#include <stdio.h>
#include <stdlib.h>
/** main - a program that prints all possible combinations
 *  of two two-digit numbers.
 *  Return: return 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (b > a)
			{
				putchar(a / 10 + '0');
				putchar(a % 10 = '0');
				putchar (' ');
				putchar(b / 10 + '0');
				putchar (b % 10 + '0');

				if (a * 100 + b != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
