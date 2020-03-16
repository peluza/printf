#ifndef HEADER_FILE
#define HEADER_FILE

int _printf(const char *format, ...);

void print_char(va_list args);
void print_int(va_list args);
void print_unsigned_int(va_list args);
void print_string(va_list args);
int _putchar(char c);


typedef struct {
char *fto;
void (*p)(_printf);
}print_fto;

#endif
