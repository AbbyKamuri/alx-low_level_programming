#include <stdlib.h>
#include "main.h"
#include<stdio.h>
/**
 * _islower: checks for lowercase letters
 *c: is the parameter for _islower
 *Return: (1) if character is lowercase else (0)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
