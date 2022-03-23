#include <stdlib.h>
#include "main.h"
#include<stdio.h>
/**
 * print_alphabet_x10 - print lowercase alphabets 10 times
 *
 * 
 */
void print_alphabet_x10(void)
{
	char alphabets;
	int i;

	for (i = 0; i < 10; i++)
	{
		alphabets = 'a';
		while (alphabets <= 'z')
		{
			putchar(alphabets);
			alphabets++;
		}
	}
putchar('\n');
}
