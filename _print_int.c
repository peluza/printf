#include "holberton.h"
/**
 *_print_int - function that print integers
 *@args: arguments input
 *Return: i
 */
int _print_int(va_list args)
{
    int i = 0;
    int mod = 1;
    int digit;
    unsigned int dig;

    digit = va_arg(args, int);
    if (digit < 0)
    {
        _putchar('-');
        dig = digit * -1;
        i++;
    }
    else
        dig = digit;
    while (dig / mod > 9)
    {
        mod = mod * 10;
    }
    while (mod > 0)
    {
        _putchar(dig / mod + '0');
        dig = dig % mod;
        mod = mod / 10;
        i++;
    }
    return (i);
}
