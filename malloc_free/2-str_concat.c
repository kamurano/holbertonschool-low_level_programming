#include "main.h"
#include <stdlib.h>
/**
 * str_concat - funk
 * @s1: str1
 * @s2: str2
 * Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	char *buf;
	int size1 = 0;
	int size2 = 0;
	int i = 0, k = 0;

	if (s1 == NULL & s2 == NULL)
		return (NULL);
	while(s1[i] != '\0')
	{
		size1++;
		i++;
	}
	i = 0;
	while(s2[i] != '\0')
	{
		size2++;
		i++;
	}
	buf = malloc(sizeof(char) * (size1 + size2) + 1);
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		buf[k] = s1[i];
		k++;
	}
	for (i = 0; i < size2; i++)
	{
		buf[k] = s2[i];
		k++;
	}
	return (buf);
}
