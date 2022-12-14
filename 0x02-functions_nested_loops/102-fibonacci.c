#include <stdio.h>
/*
 * main - main block
 * Description: a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: always 0
 */
int main(void)
{
	int x = 0;
	long int a = 0, b = 1, next;

	while (x < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (x < 49)
		{
			printf(", ");
		}
		x++;
	}
	putchar('\n');
	return (0);
}
