#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */
char alphabets;
int main(void)
{
	
	print_alphabet();
	return (0);
}


void print_alphabet(void)
{
	
	alphabets = 'a';
	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
}
