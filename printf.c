#include "holberton.h"
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

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%' && format[x + 1] == '%')
		{
		}
		if (format[x] == '%')
		{
			specif_fto matrix[] = {
				{"c", _print_char},
				{"i", _print_int},
				{"d", _print_int},
				{"s", _print_string},
				{"r", _print_rev},
				{'\0', '\0'}
			};
			x = x + 1;
			for (j = 0; matrix[j].fto && format[x] != *(matrix[j].fto); j++)
			{
			}
			if (matrix[j].fto)
				matrix[j].p(args);
			else
			{
				if (!format[x])
					return (-1);
				if (format[x] != '%')
					_putchar('%');
				_putchar(format[x]);
			}
		}
		else
			_putchar(format[x]);
	}
	va_end(args);
	return (0);
}
