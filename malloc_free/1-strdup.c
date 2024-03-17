#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - func
 * @str: pointer
 * Return: pointer
*/
char *_strdup(char *str)
{
	int size;
	char *buf;
	int i;

	if (str == NULL)
		return NULL;
	size = strlen(str);
	buf = malloc(sizeof(char) * size);
	if (buf == NULL)
		return NULL;
	for (i = 0; i < size;i++)
		buf[i] = str[i];
	return buf
}
