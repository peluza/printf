#include "holberton.h"
/**
 * _print_rev - print the text rev
 *
 * @args: caracter
 *Return: number character
 */
int _print_rev(va_list args)
{
	char a;
	char *s;
	int x, c;

	s = va_arg(args, char *);
	a = s[0];
	for (x = 0; a != '\0'; x++)
	{
		a = s[x];
		c = x;
	}
	c = c - 1;
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	return (c);
}
