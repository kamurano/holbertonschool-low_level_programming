#include "main.h"
#include <stdio.h>
/**
 * print_line - func
 * @n: var
*/
void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
		_putchar('_');
	if (n != 0)
		_putchar('\n');
}
