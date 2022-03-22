#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
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
	print_alphabet();
return (0);

}
