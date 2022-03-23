#include <stdlib.h>
#include "main.h"
#include<stdio.h>
/**
 * _islower: checks for lowercase letters
 *c: is the parameter for _islower
 *Return: (1) if character is lowercase else (0)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
  else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
