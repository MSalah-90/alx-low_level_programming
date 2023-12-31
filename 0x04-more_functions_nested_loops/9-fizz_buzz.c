#include <stdio.h>
#include "main.h"

/**
 * main -  Entry - point
 * Description: prints 1 to 100 with multiples of 3 replaced by Fizz
 * & multiples of 5 by Buzz and multiples of
 * both 3 & 5 replaced by FizzBuzz
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		else if (i % 3 != 0 && i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
		else
			printf("\n");

	}
	return (0);
}
