#include "holberton.h"
/**
 *_puts - function prints characters and string
 *@str: address at memory
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
}
