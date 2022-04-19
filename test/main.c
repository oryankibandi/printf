#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

        int len,len2,len3, age = 23, len4;
        char s = 'H';
        char *str = "Wednesday";
        len = _printf("Let's try to printf a %c simple sentence.\n",s);
        len2 = _printf("Today is %s %c.\n", str, s);

        len3 = _printf("Length.\n");
        printf("character printed: %d\n ", len2);
        len4 = _printf("i am %d yrs\n", age);
        printf("length with int: %d\n",len4);
	_printf("Unknown:[%r]\n");
	//printf("unknown %k", len);
        //printf("%s", age);
        return (0);
}

