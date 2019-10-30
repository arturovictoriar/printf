#include "holberton.h"

/**
  * reve - fills memory with a constant byte
  * @a: the value to print
  * Return: numbers of characters printed
  */
int reve(va_list a)
{
	char *st = va_arg(a, char *), *rever;
	int i, j;

	if (st == NULL)
		st = "(null)";

	for (i = 0; st[i] != '\0'; i++)
		;
	rever = malloc(i + 1);
	if (rever == NULL)
		return (0);
	for (j = 0; j < i; j++)
		rever[(i - 1) - j] = st[j];
	rever[j] = '\0';
	return (_write(1, rever, i));
}
