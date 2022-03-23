#include <stdlib.h>
#include "main.h"
#include<stdio.h>
/**
 * _islower-  checks for alphabetic character.
 *@c:parameter to check if it is lower case
 *Return- (1) if character is letter,lowercase or uppercase else (0)
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
