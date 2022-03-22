#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */
print_alphabet()
  {
			
			char alphabets;
			alphabets = 'a';
			while (alphabets <= 'z')
			{
				putchar(alphabets);
				alphabets++;
			}
			putchar('\n');
		};
int main(void)
{
	print_alphabet();

return (0);

}

