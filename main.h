#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

/* get_flag */
int get_flag(char s, flags_t *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

/* print_custom */
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);

/* print_address */
int print_address(va_list l, flags_t *f);

/* print_percent */
int print_percent(va_list l, flags_t *f);

#endif  /*MAIN_H */
