#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - func main for
 * description: compares
 * Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int digit = n % 10

	if (digit > 5)
	{
		printf("%d is %d and is greater than 5\n", n, digit);
	}
	else if (n < 6 && n != 0)
	{
		printf("%d is %d and is less than 6 and not 0\n", n, digit);
	}
	else if (n == 0)
	{
		printf("%d is %d and is 0\n", n, digit);
	}
	return (0);
}

