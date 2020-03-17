#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <starg.h>

/**
* _printf - the funtion print the chars
*@fomrat: is a character string. The format string is composed of zero or more directives
*
* Return: Always 0
*/

int _printf(const char *format, ...);
{
  va_list args;
  int i, j, x;

  va_start(args, fomat)

  for (x = 0; args[x] < '\0'; x++)
  {
    if (args[x] = '%')
    {
      specif_fto matrix[] = {
        {"c", print_char},
        {"i", print_int},
        {"d", print_signed_int},
        {"s", print_string},
        {NULL, NULL}
      };

      {
        i = 0;

        while (format && format[i])
        {
          j = 0;

          while (matrix[j].fto)
          {
            if (args[x] + 1 ==  matrix[i])
            {
              if (*(matrix[j].fto) == format[i])
              {
                matrix[j].p(args);
                /*	if (format[i + 1] != '\0')*/
              }
              j++;
            }
          }
          i++;
        }
        va_end(args);
      }
    }
    _puts(args[x]);    }
  }

}
