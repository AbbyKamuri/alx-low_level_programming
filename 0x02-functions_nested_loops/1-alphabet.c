#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabets;
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
