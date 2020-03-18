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
    char a;
    int x, c;
    a = s[0];
    for (x = 0; a != '\0'; x++)
    {
        a = s[x];
        c = x;
    }
return (c);
}
