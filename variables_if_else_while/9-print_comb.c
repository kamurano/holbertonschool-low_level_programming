#include <stdio.h>
/**
 * main - func
 * Description: func
 * Return: zero
*/
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
