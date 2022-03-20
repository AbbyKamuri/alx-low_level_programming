#include<stdio.h>
/**
 * main - entry point
 *
 * Return: 1 (FAILURE)
 */
int main(void)
{
	int outer = 48;
	int inner = 49;
	int comma = 44;
	int space = 32;
	int controller = 49;

while (outer <= 56)
{
while (inner <= 57)
{
	putchar(outer);
	putchar(inner);
	if (outer != 56 || inner != 57)
	{
	putchar(comma);
	putchar(space);
	}
	inner++;
	}
	outer++;
	controller++;
	inner = controller;
}
	putchar('\n');
	return (0);
}
