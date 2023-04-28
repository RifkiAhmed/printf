#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

extern int make_iso_compilers_happy;
/**
 * struct specifier - specifier type
 * @specifier: format specifier
 * @f: function of this specifier
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list args);
} specifier;

/* 1-put.c file*/
int _puts(char *str);
int _putchar(int c);

/* 3-print_functions.c file*/
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

/* 2-specifier.c file*/
int (*get_specifier(char *s))();
int get_print_func(char *s, va_list args);

/* 4-printers.c */
int print_from_to(char *from, char *to);

/* 0-printf.c file*/
int _printf(const char *format, ...);

#endif
