#include "main.h"

/**
 * print_from_to - a function that  prints a string
 * @from: start of print
 * @to: stop of print
 *
 * Return: number of character printed
 */

int print_from_to(char *from, char *to)
{
	int sum = 0;

	while (from <= to)
	{
		sum += _putchar(*from);
		from++;
	}
	return (sum);
}
