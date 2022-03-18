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
	if(n > 0){
	printf(n,"is positive\n");
	}
	if(n == 0){
	printf(n,"is zero\n");
	}
	else{
	printf(n, "is negative\n");
	}
	return (0);
}
