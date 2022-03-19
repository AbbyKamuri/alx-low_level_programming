#include <stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - entry point
 *
 * Return: 1 (FAILURE)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0", n, last);
	else
		printf("Last digit of %d is %d and is less than 6 and is not 0", n, last);
	return (0);
}
