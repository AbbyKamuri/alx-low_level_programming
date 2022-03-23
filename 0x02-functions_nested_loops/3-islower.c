#include <stdlib.h>
#include "main.h"
#include<stdio.h>
/**
 * int_islower - checks for lowercase letters
 *@ c is the parameter for _islower
 *Return type of _islower is int 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
