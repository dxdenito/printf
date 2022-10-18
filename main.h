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

#endif  /*MAIN_H */
