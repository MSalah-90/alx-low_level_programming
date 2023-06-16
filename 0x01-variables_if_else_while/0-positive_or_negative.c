#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>


/* 
 * main - Entry point
 *
 * Description: A C program that creates random number and checks whether it is positive or negative.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n>0)
	       	printf("%i is positive\n",n);
	else if (n == 0)
	       	printf("%i is zero\n",n);
	else
		printf("%i is negative\n",n);
		
	return (0);
}
