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

	while (p != '\0')
	{
		putchar(str[p]);
		p++;
	}
	putchar('\n');
}
