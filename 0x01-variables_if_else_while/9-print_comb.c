#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
 * main - entry point
 *
 * Return: 1 (FAILURE)
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		if(i != 57)
		{
		putchar(i);
		putchar(', ');
		}
		else
		{
		putchar(i);
		}
		
		i++;
	}
	putchar('\n');
	return (0);

}
