#include "main.h"
#include <stdlib.h>

<<<<<<< HEAD
=======

>>>>>>> d0a2157a51210fbac5ec6d2eb751b33e9a461663
/**
 * check_for_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
static int (*check_for_specifiers(const char *format))(va_list)
{
<<<<<<< HEAD
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};
=======
	va_list ap;

	unsigned int i = 0, k = 0, m;
	int n = 0, b;
	char c;
>>>>>>> d0a2157a51210fbac5ec6d2eb751b33e9a461663

	for (i = 0; p[i].t != NULL; i++)
	{
<<<<<<< HEAD
		if (*(p[i].t) == *format)
=======
	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (!format[i])
			return (-1);
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
					if (_putchar(c))
						n++;
					break;
				case 's':
					b = print_string(ap);
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
					if (_putchar('%'))
						n++;
					break;
				case '\0':
					return (-1);
				default:
					if (_putchar('%'))
						n++;
					if (_putchar(format[i]))
						n++;
			}
			k = 0;
		}

		if (format[i] == '%' && m)
>>>>>>> d0a2157a51210fbac5ec6d2eb751b33e9a461663
		{
			break;
		}
	}
	return (p[i].f);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
<<<<<<< HEAD
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
=======
int print_string(va_list args)
{
	int j = 0, l = 0;
	char *str = va_arg(args, char *);

	if (!args)
		return (-1);
	if (!str)
	{
		str = "(null)";
	}
	if (str)
>>>>>>> d0a2157a51210fbac5ec6d2eb751b33e9a461663
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check_for_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (count);
}
