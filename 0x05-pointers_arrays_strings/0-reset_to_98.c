#include "main.h"
/**
 * reset_to_98 - takes pointer to an int as parameter and updates the value it points to 98
 * @int *n - parameter to an int 
 * Return : value to 98
 */
void reset_to_98(int *n)
{
	int num;
	int *n = &num;

	*n = 98;
}
