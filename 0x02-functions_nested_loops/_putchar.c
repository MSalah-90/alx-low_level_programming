#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <main.h>

/**
 * _putchar - writes the char x
 *
 * @x: is the char to print
 *
 * Return: 1 (success) || -1 (failing)
 *
*/


int _putchar(char x);
{
	return (write(1, &x, 1));
}
