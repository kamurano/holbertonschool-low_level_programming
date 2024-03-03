#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts - func
 * @str: variable
*/
void _puts(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(str[p]);
		p++;
	}
	_putchar('\n');
}
