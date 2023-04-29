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

/**
 * print_int - prints integer
 * @ap: pointer
 *
 * Return: char printed
 */
int print_int(va_list ap)
{
	long l;
	int sum = 0;
	char *arr = "0123456789";
	char buffer[50];
	char *ptr;
	unsigned long n;

	n = l = (int)va_arg(ap, int);
	if (l < 0)
	{
		n = -l;
	}
	ptr = &buffer[50];
	*ptr = '\0';
	do {
		*--ptr = arr[n % 10];
		n /= 10;
	} while (n != 0);
	if (l < 0)
		sum += _putchar('-');
	sum += _puts(ptr);
	return (sum);
}

/**
 * print_binary - prints integer in binary format
 * @args: pointer
 *
 * Return: number of characters printed
 */
int print_binary(va_list args)
{
        unsigned int n = va_arg(args, unsigned int);
        int sum = 0;
        char buffer[50];
        char *ptr = &buffer[50];

        *ptr = '\0';
        do {
                *--ptr = (n % 2 == 0) ? '0' : '1';
                n /= 2;
        } while (n != 0);
        sum += _puts(ptr);
        return (sum);
}
