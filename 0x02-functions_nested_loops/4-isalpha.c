#include <stdlib.h>
#include "main.h"
#include<stdio.h>
/**
 * _isalpha-  checks for alphabetic character.
 *@c:parameter to check if it is letter,lowercase or uppercase
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
