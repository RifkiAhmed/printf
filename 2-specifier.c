#include "main.h"

/**
 * get_specifier - find function related to given spcifier
 * @s: format specifier
 *
 * Return: function pointer or NULL if not found
 */
int (*get_specifier(char *s))()
{
	specifier specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{NULL, NULL}};
	int i = 0;

	while (specifiers[i].specifier)
	{
		if (*s == specifiers[i].specifier[0])
		{
			return (specifiers[i].f);
		}
		i++;
	}
	return (NULL);
}

/**
 * get_print_func - call function print of given specifier
 * @s: format specifier
 * @args: pointer to arguments of variadic function
 * Return: print_function pointer or 0 if NULL
 */
int get_print_func(char *s, va_list args)
{
	int (*f)(va_list) = get_specifier(s);

	if (f)
		return (f(args));
	return (0);
}
