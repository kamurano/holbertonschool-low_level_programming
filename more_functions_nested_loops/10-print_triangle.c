#include "main.h"
#include <stdio.h>
/**
 * print_triangle - func
 * @size: var
*/
void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = a; b <= size; b++)
			_putchar(' ');
		for (b = 0; b < a; b++)
			_putchar('#');
	_putchar('\n');
	}
}
