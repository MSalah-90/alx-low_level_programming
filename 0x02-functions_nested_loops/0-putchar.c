#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar
 *
 * Return: 0 (success)
 *
*/


int main(void)
{
	char x[] = "_putchar";
	int i;
		for (i = 0; i < 8; i++)
		{
			_putchar(x[i]);
		}

	_putchar('\n');
	return (0);
}
