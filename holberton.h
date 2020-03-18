#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _strlen(char *s);
void _puts(char *str);

typedef struct {
    char *fto;
    void (*p)(va_list);
} specif_fto;

int _printf(const char *format, ...);

int _print_char(va_list args);
int _print_int(va_list args);
int _print_rev(va_list args);
int _print_string(va_list args);

#endif
