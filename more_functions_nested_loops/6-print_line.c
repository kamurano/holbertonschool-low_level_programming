#include "main.h"
#include <stdio.h>
/**
 * print_line - func
 * @n: var
*/
void print_line(int n)
{
	int a;

	for (a = 0; a < (n + 1); a++)
		_putchar('_');
	_putchar('\n');
}
