#include <stdio.h>
/**
 * main - funk
 * Return: zero
*/
int main(void)
{
printf("Size of a char: %i byte(s)\n", sizeof(char));
printf("Size of a char: %d byte(s)\n", sizeof(int));
printf("size of a char: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
}
