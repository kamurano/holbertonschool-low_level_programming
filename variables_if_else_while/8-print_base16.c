#include <stdio.h>
/**
 * main - func
 * Description: func
 * Return: zero
*/
int main(void)
{
	char a;

	for (a = 0; a < 16; a++)
	{
		putchar('0' + (a));
	}
	putchar('\n');
	return(0);
}
