#include "holberton.h"
/**
 * _strlen - long of the str
 *
 * @s: the caracter
 *
 * Return: Always c.
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		 x++;
	return (x);
}
