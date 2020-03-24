#include "holberton.h"
/**
 *_printf - produces output according to a format
 *@format: character string
 *Return: out
 */
int _printf(const char *format, ...)
{
	va_list args;
	int j, i, out = 0;

	specif_fto arbi[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"d", _print_int},
		{"s", _print_string},
		{"r", _print_rev},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{	_putchar('%');
			out += 1;
		}
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i = i + 1;
			for (j = 0; arbi[j].fto; j++)
			{
				if (format[i] == *(arbi[j]).fto)
					out += (arbi[j].p(args));
			}
		}
		else if (format[i] != '\0')
		{
			_putchar(format[i]);
			out += 1;
		}
	}
	va_end(args);
	return (out);
}
