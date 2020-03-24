#include "holberton.h"
/**
 *_puts - function prints characters and string
 *@str: address at memory
 *Return: i
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
