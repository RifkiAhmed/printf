#include "main.h"

/**
 * print_unsigned - prints unsigned integer
 * @args: pointer
 *
 * Return: char printed
 */
int print_unsigned(va_list args)
{
	long l;
	int sum = 0;
	char *arr = "0123456789";
	char buffer[50];
	char *ptr;
	unsigned long n;

	n = l = (unsigned int)va_arg(args, unsigned int);
	ptr = &buffer[50];
	*ptr = '\0';
	do {
		*--ptr = arr[n % 10];
		n /= 10;
	} while (n != 0);
	sum += _puts(ptr);
	return (sum);
}

/**
 * print_octal - prints number in octal format
 * @args: pointer
 *
 * Return: char printed
*/

int print_octal(va_list args)
{
	long l;
	int sum = 0;
	char *arr = "0123456789";
	char buffer[50];
	char *ptr;
	unsigned long n;

	n = l = (unsigned int)va_arg(args, unsigned int);
	ptr = &buffer[50];
	*ptr = '\0';
	do {
		*--ptr = arr[n % 8];
		n /= 8;
	} while (n != 0);
	sum += _puts(ptr);
	return (sum);
}

/**
 * print_hex - prints number in lowercase hex
 * @args: pointer
 *
 * Return: char printed
 */
int print_hex(va_list args)
{
	long l;
	int sum = 0;
	char *arr = "0123456789abcdef";
	char buffer[50];
	char *ptr;
	unsigned long n;

	n = l = (unsigned int)va_arg(args, unsigned int);
	ptr = &buffer[50];
	*ptr = '\0';
	do {
		*--ptr = arr[n % 16];
		n /= 16;
	} while (n != 0);
	sum += _puts(ptr);
	return (sum);
}

/**
 * print_HEX - prints number in uppercase HEX
 * @args: pointer
 *
 * Return: char printed
 */
int print_HEX(va_list args)
{
	long l;
	int sum = 0;
	char *arr = "0123456789ABCDEF";
	char buffer[50];
	char *ptr;
	unsigned long n;

	n = l = (unsigned int)va_arg(args, unsigned int);
	ptr = &buffer[50];
	*ptr = '\0';
	do {
		*--ptr = arr[n % 16];
		n /= 16;
	} while (n != 0);
	sum += _puts(ptr);
	return (sum);
}


#include "main.h"

/**
 * print_address - prints address of pointer
 * @args: pointer
 *
 * Return: char printed
 */
int print_address(va_list args)
{
	int sum = 0;
	char *arr = "0123456789abcdef";
	char buffer[50];
	char *ptr;
	unsigned long n = 0;

	n = (unsigned long int)va_arg(args, unsigned long int);
	if (!n)
		return (_puts("(nil)"));
	ptr = &buffer[50];
	*ptr = '\0';

	do {
		*--ptr = arr[n % 16];
		n /= 16;
	} while (n != 0);
	*--ptr = 'x';
	*--ptr = '0';
	sum += _puts(ptr);
	return (sum);
}
