#include <stdarg.h>
#include "main.h"


int print_string(char *str);
/**
 * _printf -  prints different data types passed in
 * @format: string to be printed
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;

	unsigned int i = 0, k = 0, m;
	int n = 0, b;

	if (!format)
		return (-1);

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (!format[i])
			break;
		m = 1;
		if (k)
		{
			m = 0;
			switch (format[i])
			{
				case 'c':
					n += _putchar(va_arg(ap, int));
					break;
				case 's':
					n +=  print_string(va_arg(ap, char *));
					break;
				case 'd':
					n += print_int(va_arg(ap, int));
					break;
				case 'i':
					n += print_int(va_arg(ap, int));
					break;
				case '%':
					n += _putchar('%');
					break;
				case '\0':
					return (-1);
				default:
					n += _putchar('%');
					n += _putchar(format[i]);
			}
			k = 0;
		}

		if (format[i] == '%' && m)
		{
			k = 1;
		} else if (format[i] != '%' && m)
		{
			n += _putchar(format[i]);
		}

		i++;
	}

	va_end(ap);

	return (n);
}
/**
 * print_string - prints string
 * @str: string literal
 * Return: number of characters printed
 *
 */
int print_string(char *str)
{
	unsigned int j = 0;
	int l = 0;

	if (!str)
		str = "(null)";

	if (str)
	{
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			l++;
			j++;
		}
	}

	return (l);
}
