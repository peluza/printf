#include "variadic_functions.h"
/**
 * print_char - print characters
 * @args: pointer to arguments list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - print integers
 * @args: pointer to arguments list
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
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
void print_all(const char * const format, ...)
{
		va_list args;
		int i, j;

		specif_fto matrix[] = {
			{"c", print_char},
			{"i", print_int},
			{"f", print_float},
			{"s", print_string},
			{NULL, NULL}
		};

		va_start(args, format);

		i = 0;

		while (format && format[i])
		{
			j = 0;

			while (matrix[j].fto)
			{
				if (*(matrix[j].fto) == format[i])
				{
					matrix[j].p(args);
					if (format[i + 1] != '\0')
						printf(", ");

				}
				j++;
			}
			i++;
		}
		va_end(args);
		putchar('\n');
}
