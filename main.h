#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define BUFFER_1024

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
int print_int(va_list args);
int print_binary(va_list args);

/* 5-print_number.c */
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_address(va_list args);

/* 2-specifier.c file*/
int (*get_specifier(char *s))();
int get_print_func(char *s, va_list args);

/* 4-specifier.c*/
int print_from_to(char *from, char *to);

/* 0-printf.c file*/
int _printf(const char *format, ...);

#endif
