#include <stdlib.h>
#include "main.h"
#include<stdio.h>
/**
 * _islower- checks for lowercase letters
 *@c:parameter to check if it is lower case
 *Return: (1) if character is lowercase else (0)
 */
int _islower(int c)/**@c:parameter to check if it is lower case*/
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
