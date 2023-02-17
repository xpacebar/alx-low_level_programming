#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program prints the last digit
 * Returb: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = (n % 10);
	if (l_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digit);
	else if (l_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, l_digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);
	return (0);
}
