#include "holberton.h"

/**
  * rot13 - fills memory with a constant byte
  * @a: the value to print
  * Return: numbers of characters printed
  */
int rot13(va_list a)
{
	char *st = va_arg(a, char *), *rot;
	int i, j, k, cont;
	char leet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char chan[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (st == NULL)
		st = "(null)";

	for (i = 0; st[i] != '\0'; i++)
		;
	rot = malloc(i + 1);
	if (rot == NULL)
		return (0);
	for (j = 0; j < i; j++)
	{
		for (k = 0; leet[k] != '\0'; k++)
			if (st[j] == leet[k])
				break;

		rot[j] = chan[k];
	}
	rot[j] = '\0';
	cont = _write(1, rot, i);
	free(rot);
	return (cont);
}
