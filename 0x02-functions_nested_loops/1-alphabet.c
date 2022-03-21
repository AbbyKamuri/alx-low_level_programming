#include "main.h"
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
		_putchar(alphabets);
		alphabets++;
		}
_putchar('\n');
}
