#ifndef _PRINTF_LIB
#define _PRINTF_LIB

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
  * struct op - Struct op
  *
  * @op: The operator
  * @f: The function associated
  */

typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int st(va_list a);
int ch(va_list a);
int por(va_list a);
int inte(va_list a);
int _putc(char a);
#endif
