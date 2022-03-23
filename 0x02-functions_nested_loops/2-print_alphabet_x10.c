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
	char lowercase-10_times;
	int i;

	lowercase-10_times = print_alphabet();
	for (i = 0; i < 10; i++)
	{
		putchar(lowercase-10_times);
	}
putchar('\n');
}
