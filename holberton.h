#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct fto - the funtion is struct of the typedef struct
 * @fto: the identificator to format
 * @p: called ot the funtion punters
 * specif_fto struct - the funtion is struct of the typedef struct
 */

typedef struct fto
{
	char *fto;
	void (*p)(va_list);
} specif_fto;

int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_int(va_list args);
int _print_rev(va_list args);
int _print_string(va_list args);
int _putchar(char c);
int _strlen(char *s);
void _puts(char *str);

#endif
