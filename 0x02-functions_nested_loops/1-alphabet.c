#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
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
int main(void)
{
	print_alphabet();
	return (0);
}
