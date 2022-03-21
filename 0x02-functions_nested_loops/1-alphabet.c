#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 *
 * Return: 1 (FAILURE)
 */
void print_alphabet(void)
{
	char alphabets;

	alphabets = 'a';
		while (alphabets <= 'z')
		{
		putchar(alphabets);
		alphabets++;
		}
putchar('\n');
}
