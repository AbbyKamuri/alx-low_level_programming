#include<stdio.h>
#include<stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */
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
int main(void)
{
print_alphabet();
return (0);

}

