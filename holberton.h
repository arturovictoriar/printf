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
#endif
