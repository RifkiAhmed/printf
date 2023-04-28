#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: total of characters printed
 */
int _printf(const char *format, ...)
{
	int total = 0;
	char *ptr, *from;
	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (ptr = (char *)format; *ptr; ptr++)
	{
		if (*ptr != '%')
		{
			total += _putchar(*ptr);
			continue;
		}
		from = ptr;
		ptr++;
		if (!get_specifier(ptr))
			total += _putchar(*ptr);
		else
			total += get_print_func(ptr, args);
	}
	_putchar(-1);
	va_end(args);
	return (total);
}
