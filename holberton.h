#ifndef HEADER_FILE
#define HEADER_FILE

int _printf(const char *format, ...);

void print_char(va_list args);
void print_int(va_list args);
void print_signed_int(va_list args);
void print_string(va_list args);
int _putchar(char c);
void _puts(char *str);

typedef struct {
char *fto;
void (*p)(va_list);
}print_fto;

#endif
