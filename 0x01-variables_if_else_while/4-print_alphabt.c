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
	char c = 'a';
	char e = 'e';
	char q = 'q';

	while (c <= 'z')
	{
		if (c != e && c != q)
		putchar(c);
		c++;
	}
		putchar('\n');
	return (0);
}
