#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
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
	int (*p)(va_list args);
} specif_fto;

int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_int(va_list args);
int _print_rev(va_list args);
int _print_string(va_list args);
int _putchar(char c);
int _strlen(char *s);
int _puts(char *str);

#endif
