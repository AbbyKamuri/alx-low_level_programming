#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
