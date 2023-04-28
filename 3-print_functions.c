#include "main.h"

/**
 * print_char - prints a character
 * @args: pointer to agruments of a variadic function
 *
 * Return: number of character printed
 */
int print_char(va_list args)
{
	unsigned int sum = 0, ch = va_arg(args, int);

	sum += _putchar(ch);
	return (sum);
}

/**
 * print_string - prints a string
 * @args: pointer to agruments of a variadic function
 *
 * Return: number of character printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	unsigned int sum = 0;

	switch ((int)(!str))
	case 1:
		str = "(null)";
	sum += _puts(str);

	return (sum);
}

/**
 * print_percent - prints a percent
 * @args: pointer to agruments of a variadic function
 *
 * Return: number of character printed
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
