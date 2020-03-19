#include "holberton.h"
#include<stdlib.h>
/**
 *_printf - produces output according to a format
 *@format: character string
 *Return: s
 */
int _printf(const char *format, ...)
{
	va_list args;
	int j, x;

	va_start(args, format);

	specif_fto matrix[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"d", _print_int},
		{"s", _print_string},
		{"r", _print_rev},
		{NULL, NULL}
	};

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{	
			j = 0;
			while (matrix[j].fto)
			{
				if (format[x + 1] == *(matrix[j]).fto)
					(matrix[j].p(args));
				else
				{
					if (!format[x])
						return (-1);
					if (format[x + 1] == '%')
						_putchar('%');
					_putchar(format[x]);
				}
				j++;
			}
		}
		else
			_putchar(format[x]);
	}
	va_end(args);
	return (0);
}
