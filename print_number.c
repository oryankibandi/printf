#include "main.h"

/**
 * print_int - prints integer
 * @n:integer to be printed
 * Return: void
 *
 */
int print_int(int n)
{
int a = n;
int i = 0;

if (n)
{
if (n < 0)
{
i += _putchar('-');
a = -a;
}
if ((a / 10) > 0)
i += print_int(a / 10);
i += _putchar((a % 10) + '0');
}
else
{
i += _putchar(n + '0');
}
return (i);
}
