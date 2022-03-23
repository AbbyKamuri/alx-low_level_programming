#include <stdlib.h>
#include "main.h"
#include<stdio.h>
/**
 * int_islower - checks for lowercase letters
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
