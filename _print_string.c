#include "holberton.h"
/**
 *_print_string - function that print strings
 *@args: arguments
 *Return: len
 */
int _print_string(va_list args)
{
	char *s;
	int len;

	s = va_arg(args, char*);
	len = _puts(s);

	return (len);
}

