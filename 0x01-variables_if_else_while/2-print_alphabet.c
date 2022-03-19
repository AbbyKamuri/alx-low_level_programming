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
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar("%d\n", ch);
		ch++;
	}
	return (0);
}
