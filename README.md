This is a readme file for printf project.

_printf
_printf is a mini_version of printf function that formats and prints data. This function prints arguments according to format.

Description
This repository contains all the files necessary for this _printf function to run. This function currently handles the following conversion specifiers:

c
s
%
d
i
b
o
But does not yet handle: flag characters, field width, precision and length modifiers.

It does, however has some other unique conversion specifiers:

r: prints the reversed string
R: prints the encrypted string
Usage
Here is a sample main program:

int main(void)
{
	_printf("String:[%s]\n", "I am a string !");
	return (0);
}
--------------------------------------------
[terminal]$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
[terminal]$ ./printf
String:[I am a string !]
[terminal]$
Project status
..in progress

Authors
Ian Kibandi and Doreen Machoni
