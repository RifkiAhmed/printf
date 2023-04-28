#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Return: str lenght
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - prints a character
 * @c: character tp print
 *
 * Return: 1 if success else -1 if failed
 */
int _putchar(int c)
{
	static int i;
	static char buf[1024];

	if (c == -1 || i >= 1024)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != -1)
		buf[i++] = c;
	return (1);
}
