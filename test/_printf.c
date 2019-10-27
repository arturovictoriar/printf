#include "holberton.h"

/**
  * _printf - fills memory with a constant byte
  * @format: is the string given
  * Return: numbers of characters printed
  */

int _printf(const char *format, ...)
{
	op_t o[] = {
		{"c", ch},
		{"s", st},
		{"i", inte},
		{"d", inte},
		{"%", por},
		{NULL, NULL},
	};

	int i = 0, j = 0, cont = 0;
	va_list va;

	va_start(va, format);

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; o[j].op != NULL; j++)
			{
				if (format[i + 1] == o[j].op[0])
				{
					cont += o[j].f(va);
					i++;
					break;
				}
				else
				{
					write(1, &(format[i]), 1);
					cont++;
				}
			}
		}
		else
		{
			write(1, &(format[i]), 1);
			cont++;
		}
	}
	va_end(va);
	return (cont);
}

/**
  * st - fills memory with a constant byte
  * @a: the value to print
  * Return: numbers of characters printed
  */
int st(va_list a)
{
	char *st = va_arg(a, char *);
	int i;

	for (i = 0; st[i] != '\0'; i++)
		;
	return (write(1, st, i));

}

/**
  * ch - fills memory with a constant byte
  * @a: the value to print
  * Return: numbers of characters printed
  */
int ch(va_list a)
{
	char st = va_arg(a, int);

	return (write(1, &st, 1));
}

/**
  * por - fills memory with a constant byte
  * @a: the value to print
  * Return: numbers of characters printed
  */
int por(va_list a)
{
	char porce = '%';

	(void) a;
	return (write(1, &porce, 1));
}