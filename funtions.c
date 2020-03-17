#include<stdio.h>
#include"holberton.h"


/**
* print_char - print characters
* @args: pointer to arguments list
*/
void print_char(va_list args)
{
    _putchar(va_arg(args, int));
}

/**
* print_int - print integers
* @args: pointer to arguments list
*/
void print_int(va_list args)
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

/**
* print_float - prints floating point numbers
* @args: pointer to arguments list
*/
void print_signed_int(va_list args)
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

/**
* print_string - prints strings
* @args: pointer to arguments list
*/
void print_string(va_list args)
{
  char *s, *e;
  s = va_arg(args, char*);
  e[6] = "(nil)"
  if (s == NULL)
  {
     _puts(e);
  }
  else
  {
    _puts(s);
  }
}

/**
*print_all - prints anything
*@format: is a list of types of arguments passed to the function
*/
