#include "holberton.h"
/**
 *_print_char - function prints characteres
 *@args: arguments of input
 *Return: 1
 */
int _print_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (1);
}
