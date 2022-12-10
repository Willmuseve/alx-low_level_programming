#include <stdlib.h>
<<<<<<< HEAD
#include <stdio.h>
=======

>>>>>>> b8982cf8d2e9520191bb0b37dced5845ec1d67f5
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{
<<<<<<< HEAD
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%i is negative\n", n)
	else if (n > 0)
		printf("%i is positive\n", n)
	else
		printf("%i is zero")
					/* your code goes there */

	return (0);
=======

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */

					return (0);
>>>>>>> b8982cf8d2e9520191bb0b37dced5845ec1d67f5

}
