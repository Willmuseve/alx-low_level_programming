#include <stdio.h>
/**
 * main - main checker
 * Return: returns 0
 */
int main(void)
{
	unsigned long int x;
	unsigned long int before = 1;
	unsigned long int after = 2;
	unsigned long int l = 1000000000;
	unsigned long int beforex;
	unsigned long int beforexx;
	unsigned long int afterx;
	unsigned long int afterxx;
	
	printf("%lu", before);

	for (x = 1; x < 91; x++)
	{
		printf(", %lu", after);
		after += before;
		before = after - before;
	}
	beforex = (before / l);
	beforexx = (before % l);
	afterx = (after / l);
	afterxx = (after % l);

	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", afterx + (afterxx / l));
		printf("%lu", afterxx % l);
		afterx = afterx + beforex;
		beforex = afterx - beforex;
		afterxx = afterxx + beforexx;
		beforexx = afterxx - beforexx;
	}
	printf("\n");
	return (0);
}
