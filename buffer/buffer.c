#include "holberton.h"

/**
 * _write - Controls the print buffer
 * @file: The file when the content is print it
 * @data: The data to print
 * @lenght: The lenght to print
 *
 * Return: Lenght printed
 */
int _write(int file, char *data, int lenght)
{
	static int	count;
	static char	buffer[BUFF_SIZE] = "";
	int i, r = 0;

	if (file == FLUSH)
	{
		r += write(1, buffer, count);
		count = 0;
		return (r);
	}

	for (i = 0; i < lenght; i++)
	{
		buffer[count++] = data[i];
		if (count >= BUFF_SIZE)
		{
			r += write(file, buffer, count);
			count = 0;
		}
	}
	return (r);
}
