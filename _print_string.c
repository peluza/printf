#include "holberton.h"
/**
 *_print_string - function that print strings
 *@args: arguments
 *Return: s
 */
int _print_string(va_list args)
{
	char *s;
	int len;

	s = va_arg(args, char*);
	_puts(s);
	len = _strlen(s);

	return (len);
}

