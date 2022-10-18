#include "main.h"

/**
 * _printf - printf function
 * @format: const char pointer
 * Return: length
 */

int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguements;
	flags_t flags = {0, 0, 0};

	register int count = 0;
	va_start(arguments, format);
	if (format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%s')
		{
			p++;
			if(*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(arguements, &flags)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(arguments);
	return (count);
}
