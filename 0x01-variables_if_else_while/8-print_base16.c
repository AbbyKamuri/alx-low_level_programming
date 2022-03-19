#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - entry point
 *
 * Return: 1 (FAILURE)
 */
int main(void)
{
	int i = 48;
	int j = 97;

	while (i >= 57)
	{
		putchar(i);
		i++;
	}
	while(i >= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
