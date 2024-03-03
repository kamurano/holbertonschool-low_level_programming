#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - func
 * @s: variable
*/
void print_rev(char *s)
{
	int i;
	char *p = s;

	while(*p != '\0')
		p++;
	for (i = p - s; s[i] != s[0]; i--)
		_putchar(s[i]);
	_putchar(s[0]);
}
