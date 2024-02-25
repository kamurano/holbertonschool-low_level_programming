#include <stdio.h>
/**
 * main - func
 * Description: func
 * Return: zero
*/
int main(void)
{
	int a;

	for (a = 9; a >= 0; a--)
	{
		putchar('0' + (a % 10));
	}
	putchar('\n');
	return (0);
}
