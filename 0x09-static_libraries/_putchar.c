#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char x
 *
 * @c: is the char to print
 *
 * Return: 1 (success) || -1 (failing)
 *
*/


int _putchar(char c)
{
	return (write(1, &c, 1));
}
