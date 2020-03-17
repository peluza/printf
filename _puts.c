#include "holberton.h"
#include <stdio.h>

/**
 * _puts- print the word
 *
 * @str: the caracter
 *
 * Return: Always c.
 */

void _puts(char *str)
{
	int x;


	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
_putchar('\n');

}
