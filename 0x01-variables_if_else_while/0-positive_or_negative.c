#include <stdlib.h>
#include<time.h>
/**
*main - entry point
*
*Return: 1 (FAILURE)
*/
int main (void)
{
	int n;
	
	srand(time(0))
	n = rand() - RAND_MAX / 2;
		
	if(n > 0){
	printf("%i is positive\n",n);
	}
	
	if(n == 0){
	printf("%i is zero\n",n);
	}
	else{
	printf("%i is negative\n",n);
	}
	return (0);
}
