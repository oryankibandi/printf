#include "main.h"

/**
 * print_int - prints integer
 * @var:integer to be printed
 * Return: void
 *
 */
int print_int(int var)
{

	int i = 0;

	if (var < 0)
	{
		_putchar('-');
		i++;
		var = var * -1;
	}

	if (var == 0)
	_putchar('0');
	i++;

	if (var / 10)
		print_int(var / 10);

	_putchar(var % 10 + '0');
	i++;

	return (i);
}
