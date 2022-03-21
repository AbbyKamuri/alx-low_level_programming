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
	char lowercase(char start)
	{
		char start = 'a';

		while (start <= 'z')
		{
		putchar(start);
		start++;
		}
	}
	lowercase(start);
	return (0);
}
