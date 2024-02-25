#include <stdio.h>
/**
 * main - func
 * Description: func
 * Return: zero
*/
int main(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);
	}
	for (b = 'a'; b <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
