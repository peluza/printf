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

	specif_fto matrix[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"d", _print_int},
		{"s", _print_string},
		{"r", _print_rev},
		{NULL, NULL}
	};

	va_start(args, format);

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%' && format[x + 1] == '%')
			_putchar('%');

		if (format[x] == '%')
		{
			x = x + 1;
			j = 0;
			while (matrix[j].fto)
			{
				if (format[x] == *(matrix[j]).fto)
					(matrix[j].p(args));
				else
				{
					if (!format[x])
						return (-1);
				}
				j++;
			}
		}
		else
			_putchar(format[x]);
	}
	va_end(args);
	return (x);
}
