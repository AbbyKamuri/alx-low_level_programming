#include "main.h"
/**
 * main - entry point
 *
 * Return: 1 (FAILURE)
 */
void print_lowercase(void)
{
	char lowercase;

	lowercase = 'a';

		while (lowercase <= 'z')
		{
		_putchar(lowercase);
		lowercase++;
		}
_putchar('\n');
}
