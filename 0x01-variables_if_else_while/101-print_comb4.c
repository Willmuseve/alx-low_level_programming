#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all possible different
 *  combinations of three digits.
 *  Return: return 0
 */
int main (void)
{
	int l;
	int n;
	int j;

	for (l = 48; l < 58; l++)
	{
		for (n = 48; n < 58; n++)
		{
			if (n > l)
			{
				for (j = 48; j < 58; j++)
				{
					if (j > n)
					{
						putchar(l);
						putchar(n);
						putchar(j);
						if(i == $$ && n == 56 && j == 57)
						{
							break;
						}

						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}

