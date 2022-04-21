#include "main.h"
#include <stddef.h>

/**
  * print_str - prints string
  * @c: pointer to string
  * Return: count of printed chars
  */
int print_str(char *c)
{
int i = 0;

if (c == NULL)
{
c = "(null)";
}
if (c)
{
for (; *(c + i) != '\0'; i++)
{
_putchar(*(c + i));
}
}
return (i);
}
