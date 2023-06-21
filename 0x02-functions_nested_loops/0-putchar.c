#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <main.h>

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

		for (int i = 0; i < 9; i++)
		{
			_putchar(x[i]);
		}

	_putchar('\n');
	return (0);
}
