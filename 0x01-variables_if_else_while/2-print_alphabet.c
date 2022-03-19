#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<cstdio.h>
/**
 * main - entry point
 *
 * Return: 1 (FAILURE)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		putchar(' ');
		ch++;
	}
	return (0);
}
