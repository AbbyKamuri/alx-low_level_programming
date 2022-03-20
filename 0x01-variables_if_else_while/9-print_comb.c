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
	int s = 32;
	int c = 44;

	while (i <= 57)
	{
		if(i != 57)
		{
		putchar(i);
		putchar(c);
		putchar(s);
		}
		else
		{
		putchar('%c\n', i);
		}
		
		i++;
	}
	return (0);

}
