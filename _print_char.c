#include "holberton.h"
/**
 *_print_char - function prints characteres
 *@args: arguments of input
 *Return: 1
 */
int _print_char(va_list args)
{
	char a = va_arg(args, int);
	_putchar(a);

	return (a);
}
