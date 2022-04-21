#include "main.h"
#include <stdarg.h>

int check_format(char format, va_list ap);
/**
 * _printf - produces output according to a format.
 * @format: string
 * Return: The number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
va_list ap;
int i = 0, count = 0, flag = 0;

if (format)
{
va_start(ap, format);
for (; format[i] != '\0'; i++)
{
if (!flag)
{
if (format[i] != '%')
count += _putchar(format[i]);
else
flag = 1;
}
else
{
count += check_format(format[i], ap);
flag = 0;
}
}
va_end(ap);
}
else
{
return (-1);
}
return (count);
}

/**
 * check_format - checks format of specifier
 * @format: character to check
 * Return: count
 *
 */
int check_format(char format, va_list ap)
{
int count = 0;

switch (format)
{
case 'c':
count += _putchar(va_arg(ap, int));
break;
case 's':
count += print_str(va_arg(ap, char *));
break;
case '%':
count += _putchar('%');
break;
case 'd':
count += print_int(va_arg(ap, int));
break;
case 'i':
count += print_int(va_arg(ap, int));
break;
case '\0':
return (-1);
default:
count += _putchar('%');
count += _putchar(format);
}

return (count);
}
