#include "main.h"
#include <stdio.h>
/**
 * _isdigit - func
 * @c: var
 * Return: zero
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
