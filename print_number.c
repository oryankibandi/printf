#include "main.h"

int _puts(char *s)
{
    while (*s != '\0')
    {
        _putchar(*s++);
    }
    return (0);
}
