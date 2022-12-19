#include <stdio.h>
/**
 * main - starting point
 * Return: 0
 */
int main(void)
{
	int i;
	int p = 100;

	i = 1;
	while (i <= p)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			if  (i < p)
			printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
