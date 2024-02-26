#include "main.h"
#include <stdio.h>
/**
 * main - func
 * Description - test
 * Return: zero
*/
int _isupper(int c)
{	
	char a;

	for (a = 'A'; a <= 'Z'; a++);
	{
		if (c == a)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
