#include <stdarg.h>
#include "main.h"
#include <stddef.h>


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
	char c;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	if (format)
	{
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
					c = va_arg(ap, int);
					if (sizeof(c) > 1)
						return (-1);
					_putchar(c);
					n++;
					break;
				case 's':
					b = print_string(va_arg(ap, char *));
					n += b;
					b = 0;
					break;
				case 'd':
					b = print_int(va_arg(ap, int));
					n += b;
					b = 0;
					break;
				case 'i':
					b = print_int(va_arg(ap, int));
					n += b;
					b = 0;
					break;
				case '%':
					_putchar('%');
					n++;
					break;
				case '\0':
					return (-1);
				default:
					_putchar('%');
					n++;
					_putchar(format[i]);
					n++;
			}
			k = 0;
		}

		if (format[i] == '%' && m)
		{
			k = 1;
		} else if (format[i] != '%' && m)
		{
			_putchar(format[i]);
			n++;
		}

		i++;
	}

	va_end(ap);
	}
	else
	{
		return (-1);
	}

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
	int i = 0;

	if (!str)
	{
		str = "(null)";
	}
	if (str)
	{
		for (; *(str + i) != '\0'; i++)
		{
			_putchar(*(str + i));
		}
	}
	return (i);
}
