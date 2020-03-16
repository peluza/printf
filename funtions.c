#include<stdio.h>
#include"holberton.h"

int i, j;
char *a;



/**
* print_char - print characters
* @args: pointer to arguments list
*/
void print_char(va_list args)
{
  a = va_arg(args, int);
  _putchar(a);
}

/**
* print_int - print integers
* @args: pointer to arguments list
*/
void print_int(va_list args)
{
  for (j = 0;args[j] < '\0'; j++)
  {
    i = va_arg(args[j], int);
    _putchar(i);
  }
}

/**
* print_float - prints floating point numbers
* @args: pointer to arguments list
*/
void print_float(va_list args)
{
  printf("%f", va_arg(args, double));
}

/**
* print_string - prints strings
* @args: pointer to arguments list
*/
void print_string(va_list args)
{
  char *s;

  s = va_arg(args, char*);
  s == NULL ? printf("(nil)") : printf("%s", s);
}

/**
*print_all - prints anything
*@format: is a list of types of arguments passed to the function
*/
