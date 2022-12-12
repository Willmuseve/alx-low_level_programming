#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all possible different
 *  combinations of three digits.
 *  Return: return 0
 */
int main(void)
{
	int l;
	int n;
	int j;

	
	while (j < 10)
	{
		n = 0;
		while (n < 10)
		{
			l = 0;
			while (l < 10)
			{
				if (l !=n && n != j && j < n && n < l)
				{
					putchar('0' + j);
					putchar('0' + n);
					putchar('0' + l);
					if (l + n + j != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;

			}
			n++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}	
