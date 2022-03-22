#include<stdio.h>
#include<stdlib.h>
char alphabets;
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
